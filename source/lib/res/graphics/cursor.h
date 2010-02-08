/* Copyright (c) 2010 Wildfire Games
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/*
 * mouse cursors (either via OpenGL texture or hardware)
 */

#ifndef INCLUDED_GRAPHICS_CURSOR
#define INCLUDED_GRAPHICS_CURSOR

/**
 * draw the cursor on-screen.
 *
 * @param name base name of cursor or zero to hide the cursor.
 * @param x,y coordinates [pixels] (origin is in the upper left)
 *
 * uses a hardware mouse cursor where available, otherwise a
 * portable OpenGL implementation.
 **/
extern LibError cursor_draw(const wchar_t* name, int x, int y);

// internal use only:
extern int g_yres;

#endif	// #ifndef INCLUDED_GRAPHICS_CURSOR
