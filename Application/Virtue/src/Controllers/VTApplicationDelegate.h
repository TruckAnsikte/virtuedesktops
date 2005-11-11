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
#import "VTNotificationBezel.h" 
#import "VTPreferencesViewController.h"
#import "VTOperationsViewController.h" 
#import "VTApplicationWatcherController.h"
#import "VTDesktopCollectionViewController.h" 
#import "VTPluginController.h"
#import "VTVersionTracker.h" 
#import "VTDesktopViewController.h"
#import "VTApplicationViewController.h" 
#import <Virtue/VTDesktopProtector.h>

@interface VTApplicationDelegate : NSObject {
	// outlets 
	IBOutlet NSMenu*				mStatusItemMenu; 
	IBOutlet NSMenu*				mStatusItemActiveDesktopItem; 
	IBOutlet NSMenuItem*			mStatusItemRemoveActiveDesktopItem; 
	IBOutlet NSPanel*				mSplashScreen; 
	IBOutlet NSProgressIndicator*	mSplashScreenProgress; 
	// attributes 
	BOOL							mStartedUp; 
	NSStatusItem*					mStatusItem; 
	BOOL							mStatusItemMenuDesktopNeedsUpdate; 
	BOOL							mStatusItemMenuActiveDesktopNeedsUpdate;
	BOOL							mUpdatedDock; 
	// controllers 
	VTPreferencesViewController*	mPreferenceController;
	VTOperationsViewController*		mOperationsController; 
	VTApplicationWatcherController*	mApplicationWatcher; 
	VTPluginController*				mPluginController; 
	VTVersionTracker*				mVersionTracker; 
	VTDesktopProtector*				mDesktopProtector; 
	// interface
	VTNotificationBezel*			mNotificationBezel; 
	VTDesktopViewController*		mDesktopInspector; 
	VTApplicationViewController*	mApplicationInspector; 
}

#pragma mark -
#pragma mark Actions 
- (IBAction) showPreferences: (id) sender; 
- (IBAction) showHelp: (id) sender; 

#pragma mark -
- (IBAction) showDesktopInspector: (id) sender; 
- (IBAction) showApplicationInspector: (id) sender; 
- (IBAction) showStatusbarMenu: (id) sender; 

#pragma mark -
- (IBAction) emailAuthor: (id) sender; 
- (IBAction) showProductWebsite: (id) sender; 
- (IBAction) showDonationsWebsite: (id) sender; 

#pragma mark -
- (IBAction) deleteActiveDesktop: (id) sender; 

#pragma mark -
- (IBAction) showAssistant: (id) sender; 

@end
