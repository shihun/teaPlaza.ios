//
//  UserViewController.h
//  teaPlaza
//
//  Created by bevin chen on 13-3-25.
//  Copyright (c) 2013年 maimaicha. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UserViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) UITableView *contentTableView;
@property (nonatomic, strong) NSMutableDictionary *contentDictionary;

@end
