/*
   NSSlider.h

   Copyright (C) 1996 Free Software Foundation, Inc.

   Author: Ovidiu Predescu <ovidiu@net-community.com>
   Date: September 1997
   
   This file is part of the GNUstep GUI Library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111 USA.
*/

#ifndef _GNUstep_H_NSSlider
#define _GNUstep_H_NSSlider

#include <AppKit/NSControl.h>

@class NSString;
@class NSImage;
@class NSCell;
@class NSFont;
@class NSColor;
@class NSEvent;

@interface NSSlider : NSControl

- (NSImage *)image;
- (int)isVertical;
- (float)knobThickness;
- (void)setImage:(NSImage *)backgroundImage;
- (void)setKnobThickness:(float)aFloat;
- (void)setTitle:(NSString *)aString;
- (void)setTitleCell:(NSCell *)aCell;
- (void)setTitleColor:(NSColor *)aColor;
- (void)setTitleFont:(NSFont *)fontObject;
- (NSString *)title;
- (id)titleCell;
- (NSColor *)titleColor;
- (NSFont *)titleFont;
- (double)maxValue;
- (double)minValue;
- (void)setMaxValue:(double)aDouble;
- (void)setMinValue:(double)aDouble;
- (BOOL)acceptsFirstMouse:(NSEvent *)theEvent;

@end

#endif // _GNUstep_H_NSSlider

