#include "gl.h"

/*
void swap_buffer(void)
{
   static int visiblebuffer = 0;
   visiblebuffer ^= 1;
   fb.y_offset = visiblebuffer * fb.height;

   mailbox_write(MAILBOX_FRAMEBUFFER, (unsigned)&fb + GPU_NOCACHE);
   (void) mailbox_read(MAILBOX_FRAMEBUFFER);
}
*/

void main(void)
{
  gl_init(1280, 1024, GL_DOUBLEBUFFER);

  while (1) {
    gl_clear(GL_BLACK);
    gl_draw_string(20, 20, "hello, world 0", GL_WHITE );
    gl_swap_buffer();

    gl_clear(GL_BLACK);
    gl_draw_string(20, 20, "hello, world 1", GL_WHITE );
    gl_swap_buffer();
  }
}
