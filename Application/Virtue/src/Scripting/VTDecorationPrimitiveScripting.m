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

#import "VTDecorationPrimitiveScripting.h"
#import <Virtue/VTDesktopDecoration.h>

@implementation VTDecorationPrimitive(VTScripting)

- (NSScriptObjectSpecifier*) objectSpecifier {
	id classDescription = [NSClassDescription classDescriptionForClass: [VTDesktopDecoration class]];
	NSScriptObjectSpecifier* container = [[self container] objectSpecifier]; 
	
	// NOTE: The key has to be synchronized with the VTDesktopDecorationController interface 
	return [[[NSNameSpecifier alloc] initWithContainerClassDescription: classDescription containerSpecifier: container key: @"decorationPrimitives" name: [self name]] autorelease];
}

@end

@implementation VTDecorationPrimitiveText(VTScripting)
- (NSScriptObjectSpecifier*) objectSpecifier {
	return [super objectSpecifier]; 
}
@end 