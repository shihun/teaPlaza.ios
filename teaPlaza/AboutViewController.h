//
//  AboutViewController.h
//  teaPlaza
//
//  Created by bevin chen on 13-3-25.
//  Copyright (c) 2013年 maimaicha. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AboutViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>

@property (strong, nonatomic) UITableView *contentTableView;
@property (nonatomic) BOOL newVersion;

@end
