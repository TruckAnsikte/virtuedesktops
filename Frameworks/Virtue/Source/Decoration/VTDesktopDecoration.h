/******************************************************************************
* 
* Virtue 
*
* A desktop extension for MacOS X
*
* Copyright 2004, Thomas Staller 
* playback@users.sourceforge.net
*
* See COPYING for licensing details
* 
*****************************************************************************/ 

#import <Cocoa/Cocoa.h>

#import "VTCoding.h" 
#import "VTDecorationPrimitive.h" 

@class VTDesktop; 

@interface VTDesktopDecoration : NSObject<NSCoding, VTCoding> {
	NSMutableArray*		mDecorationPrimitives; 
	NSView*				mControlView; 
	VTDesktop*			mDesktop; 
	
	BOOL				mEnabled; 
}

#pragma mark -
#pragma mark Lifetime 

- (id) initWithDesktop: (VTDesktop*) desktop;
- (void) dealloc; 

#pragma mark -
#pragma mark Attributes 

- (NSView*) controlView; 
- (void) setControlView: (NSView*) view; 

#pragma mark -
- (NSArray*) decorationPrimitives; 
- (void) removeObjectFromDecorationPrimitivesAtIndex: (unsigned int) index; 
- (void) addDecorationPrimitive: (VTDecorationPrimitive*) primitive; 
- (void) delDecorationPrimitive: (VTDecorationPrimitive*) primitive; 

#pragma mark -
- (BOOL) isEnabled; 
- (void) setEnabled: (BOOL) flag; 

#pragma mark -
- (VTDesktop*) desktop; 
- (void) setDesktop: (VTDesktop*) desktop; 

#pragma mark -
#pragma mark Drawing 

- (void) drawInView: (NSView*) view withRect: (NSRect) rect; 

@end