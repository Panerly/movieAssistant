//
//  TopDetailViewController.h
//  HWMtime
//
//  Created by mac on 15/11/6.
//  Copyright © 2015年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BasicViewController.h"
#import "TopDetail.h"
@interface TopDetailViewController : BasicViewController<UITableViewDataSource,UITableViewDelegate>
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (nonatomic,strong) TopDetail *topDetail;
@property (nonatomic,strong) NSMutableArray *commentData;
@property (nonatomic,strong) NSIndexPath *index;
@end
