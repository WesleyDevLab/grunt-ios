//
//  HDSMainViewController.h
//  HDMedical
//
//  Created by David on 15-8-10.
//  Copyright (c) 2015年 HD. All rights reserved.
//

#import "CMViewController.h"
#import "WebViewJavascriptBridge.h"


@interface HDSMainViewController : CMViewController<UIWebViewDelegate>
@property (strong,atomic)UIWebView * mainwebView;
@property (strong, nonatomic) WebViewJavascriptBridge *javascriptBridge;
@end
