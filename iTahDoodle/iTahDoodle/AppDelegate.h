//
//  AppDelegate.h
//  iTahDoodle
//
//  Created by jiangchao on 15/7/22.
//  Copyright (c) 2015年 jiangchao. All rights reserved.
//

#import <UIKit/UIKit.h>

//声明辅助函数，该函数会返回特定文件的路径，用于保存用户的任务列表信息
NSString *docPath(void);

@interface AppDelegate : UIResponder <UIApplicationDelegate,UITableViewDataSource>
{
    UITableView *taskTable;
    UITextField *taskField;
    UIButton *insertButton;
    
    NSMutableArray *tasks;
}

- (void)addTask:(id)sender;

@property (strong, nonatomic) UIWindow *window;


@end

