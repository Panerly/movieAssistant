//
//  MovieViewController.h
//  HWMtime
//
//  Created by mac on 15/10/31.
//  Copyright © 2015年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BasicViewController.h"
#import "PosterView.h"
@interface MovieViewController : BasicViewController<UITableViewDataSource,UITableViewDelegate>
@property (nonatomic,strong) UITableView *tab;
@property (nonatomic,strong) PosterView *posterView;
@property (nonatomic,strong) NSMutableArray *dataArray;
@end
