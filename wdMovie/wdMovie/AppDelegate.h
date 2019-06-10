//
//  AppDelegate.h
//  wdMovie
//
//  Created by 安离夕 on 2019/6/10.
//  Copyright © 2019年 liuzhuang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

