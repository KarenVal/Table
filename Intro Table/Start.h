//
//  ViewController.h
//  Intro Table
//
//  Created by Ximena on 30/08/16.
//  Copyright © 2016 KaVa. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Start : UIViewController<UIPageViewControllerDelegate, UIPageViewControllerDataSource>

@property (strong, nonatomic) UIPageViewController *pageViewController;

@end

