//
//  UIColor+WSLColours.h
//  timesince
//
//  Created by Stephen Darlington on 26/08/2012.
//  Copyright (c) 2012 Wandle Software Limited. All rights reserved.
//

// Make it work on both iOS and Mac OS X
#if TARGET_OS_IPHONE
// iOS device
#import <UIKit/UIKit.h>
#define WSLColor UIColor
#elif TARGET_OS_MAC
// Mac OS
#import <Cocoa/Cocoa.h>
#define WSLColor NSColor
#else
#error Unsupported platform
#endif

// At compile time this will be a class extension to UIColor or NSColor
// depending on the platform it's being compiled for.
@interface WSLColor (WSLColours)

// Left to right on the logo
+ (WSLColor*)WSLMidOrange;
+ (WSLColor*)WSLMidGreen;
+ (WSLColor*)WSLLightOrange;
+ (WSLColor*)WSLOrange;
+ (WSLColor*)WSLDarkOrange;
+ (WSLColor*)WSLLightGreen;
+ (WSLColor*)WSLLightBlue;
+ (WSLColor*)WSLDarkBlue;
+ (WSLColor*)WSLDarkGreen;
+ (WSLColor*)WSLPurple;
+ (WSLColor*)WSLOliveGreen;

// Rootn Tootn colours
+ (WSLColor*)WSLRTOrange;
+ (WSLColor*)WSLRTYellow;
+ (WSLColor*)WSLRTCyan;
+ (WSLColor*)WSLLightPurple;
+ (WSLColor*)WSLRTLightBlue;
+ (WSLColor*)WSLRTLightGreen;

@end
