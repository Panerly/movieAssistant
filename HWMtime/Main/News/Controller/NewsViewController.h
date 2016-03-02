//
//  NewsViewController.h
//  HWMtime
//
//  Created by mac on 15/10/31.
//  Copyright © 2015年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BasicViewController.h"
@class News;
@interface NewsViewController : BasicViewController<UITableViewDelegate,UITableViewDataSource>
@property (nonatomic,strong) News *news;
@property (nonatomic,copy) NSMutableArray *dataArray;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@end
