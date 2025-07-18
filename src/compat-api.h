/*
 * Copyright 2012 Red Hat, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * Author: Dave Airlie <airlied@redhat.com>
 */

/* this file provides API compat between server post 1.13 and pre it,
   it should be reused inside as many drivers as possible */
#ifndef COMPAT_API_H
#define COMPAT_API_H

#define SCRN_ARG_TYPE ScrnInfoPtr
#define SCRN_INFO_PTR(arg1) ScrnInfoPtr pScrn = (arg1)

#define SCREEN_ARG_TYPE ScreenPtr
#define SCREEN_PTR(arg1) ScreenPtr pScreen = (arg1)

#define SCREEN_INIT_ARGS_DECL ScreenPtr pScreen, int argc, char **argv

#define BLOCKHANDLER_ARGS_DECL ScreenPtr arg, pointer pTimeout, pointer pReadmask
#define BLOCKHANDLER_ARGS arg, pTimeout, pReadmask

#define CLOSE_SCREEN_ARGS_DECL ScreenPtr pScreen
#define CLOSE_SCREEN_ARGS pScreen

#define ADJUST_FRAME_ARGS_DECL ScrnInfoPtr arg, int x, int y
#define ADJUST_FRAME_ARGS(arg, x, y) arg, x, y

#define SWITCH_MODE_ARGS_DECL ScrnInfoPtr arg, DisplayModePtr mode
#define SWITCH_MODE_ARGS(arg, m) arg, m

#define FREE_SCREEN_ARGS_DECL ScrnInfoPtr arg

#define VT_FUNC_ARGS_DECL ScrnInfoPtr arg
#define VT_FUNC_ARGS pScrn

#define XF86_SCRN_ARG(x) (x)

#endif
