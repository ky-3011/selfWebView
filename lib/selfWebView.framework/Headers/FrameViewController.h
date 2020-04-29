//
//  FrameViewController.h
//  iBSSClient
//
//  Created by apple on 14/11/25.
//  Copyright (c) 2014年 SunnadaSoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UIKit/UIGestureRecognizer.h>
#import <ImageIO/ImageIO.h>
#import <CoreText/CTFont.h>
#import "SGScanningQRCodeVC.h"
#import <WebKit/WebKit.h>

@interface UIApplication(extended)

-(void) terminateWithSuccess;
@end

//@interface WKWebView (JavaScriptAlert)
//-(void)webView:(UIWebView *)sender runJavaScriptAlertPanelWithMessage:(NSString *)message initiatedByFrame:(id)frame;
//
//-(BOOL)webView:(UIWebView *)sender runJavaScriptConfirmPanelWithMessage:(NSString *)message initiatedByFrame:(id)frame;
//@end


@interface FrameViewController : UIViewController<ScanningQRCodeDelegate>

//进度条
@property(nonatomic,strong) UIProgressView *progressView;
@property (weak, nonatomic) NSTimer *timer;

@property(nonatomic) NSInteger mTimeOut;

@property(nonatomic, strong) NSURL *mWebViewUrl;

@property(nonatomic, strong) WKWebView *mWebView;
@property(nonatomic, strong) UIView  *mFaillView;
@property(nonatomic, strong) UIView  *mImageView;
@property(nonatomic, strong) UIButton *mButton;

@property(nonatomic, strong) UIView  *mLoadingView;

@property(nonatomic,strong)UIView *mShowDocView;

@property(nonatomic) BOOL isFirstLoad;

@property(nonatomic) BOOL isRedirect;
@property(nonatomic) BOOL isDownLoadPic;

@property(nonatomic) BOOL *errorCardPush;

@property(nonatomic, strong) NSTimer *timeout;

//@property(atomic,strong) NSMutableArray *deviceList;

@property(nonatomic,strong) NSString *webVersion;

@property(nonatomic) NSString *callBack;
@property(nonatomic) NSString *seq;
@property(nonatomic) NSString *nettype;



@property(nonatomic,copy) NSString *titleName;     //标题
@property(nonatomic) BOOL titleHave;          //是否显示标题
@property(nonatomic,copy) NSString *titleBgColor;  //标题背景颜色
@property(nonatomic,copy) NSString *statusBarColor;  //状态栏背景颜色
//@property(nonatomic) BOOL shareHave;        //是否显示分享
//@property(nonatomic,copy) NSArray *shareArr;     //分享数据
//@property(nonatomic,copy) NSString *shareCan;    //分享类型支持

//@property(nonatomic) BOOL  flag;
//拨打电话（新）
//-(void)callPhoneNew:(NSString *)telnum viewPhone:(UIView *)view;

-(NSString *)getUrlObjectForKey:(NSString *)strUrl keyWord:(NSString *)key keyFlag:(NSString *)flag;

-(UIImage *)WatermarkImage:(UIImage *)img withName:(NSString *)content withX:(int) x withY:(int)y withFontSize:(int)size withR:(int)r withG:(int)g withB:(int)b;
- (void)loadImageFinished:(UIImage *)image;
@end
