//
//  DirectionAppDelegate.h
//  Direction
//
//  Created by Jacky on 5/6/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DirectionViewController;

@interface DirectionAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet DirectionViewController *viewController;

@end
