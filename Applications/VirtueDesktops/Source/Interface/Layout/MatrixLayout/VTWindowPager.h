//
//  VTWindowPager.h
//  VirtueDesktops
//
//  Created by Tony on 13/06/06.
//  Copyright 2006 boomBalada! Productions. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Virtue/VTPager.h>
#import <Virtue/VTCoding.h> 
#import "VTMatrixDesktopLayout.h" 

@interface VTWindowPager : NSObject<VTPager, VTCoding> {
	NSWindow*								mWindow; 
	VTMatrixDesktopLayout*	mLayout; 
	
	BOOL										mStick; 
	BOOL										mAnimates; 
	
	BOOL										mDisplayUnderMouse; 
	BOOL										mWarpMousePointer; 
	BOOL										mShowing; 
}

#pragma mark -
#pragma mark Lifetime 
- (id) initWithLayout: (VTMatrixDesktopLayout*) layout; 
- (void) dealloc; 

#pragma mark -
#pragma mark Operations 
- (void) display: (BOOL) stick; 
- (void) hide; 

#pragma mark -
#pragma mark Attributes 
- (NSString*) name;
#pragma mark -
- (void) setDisplaysApplicationIcons: (BOOL) flag; 
- (BOOL) displaysApplicationIcons; 
#pragma mark -
- (void) setDisplaysColorLabels: (BOOL) flag; 
- (BOOL) displaysColorLabels; 
#pragma mark -
- (void) setDisplaysUnderMouse: (BOOL) flag; 
- (BOOL) displaysUnderMouse; 
#pragma mark -
- (void) setWarpsMousePointer: (BOOL) flag; 
- (BOOL) warpsMousePointer; 
#pragma mark -
- (void) setDisplaysShadow: (BOOL) flag; 
- (BOOL) displaysShadow; 
#pragma mark -
- (void) setBackgroundColor: (NSColor*) color; 
- (NSColor*) backgroundColor; 
#pragma mark -
- (void) setHighlightColor: (NSColor*) color; 
- (NSColor*) highlightColor; 
#pragma mark -
- (void) setWindowColor: (NSColor*) color; 
- (NSColor*) windowColor; 
#pragma mark -
- (void) setWindowHighlightColor: (NSColor*) color; 
- (NSColor*) windowHighlightColor; 
#pragma mark -
- (void) setDesktopNameColor: (NSColor*) color; 
- (NSColor*) desktopNameColor; 

@end