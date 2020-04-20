 
typedef NS_ENUM(NSInteger,currencyType)
{
    
    ETH,
    BTC,
    ETP,
    VEE,
    BTCNew ,
    ETPNew ,
    PrivateKeyAndAddress,
    ONT,
    WICC,
    LTC,
    ETC,
    BCH,
    ETrue,
    Bck,
    GIT
};


typedef void(^asynCallSuccessBlock)(id data);
typedef void(^synCallSuccessBlock)(id data);
typedef void(^callFailBlock)(id data);


#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
@interface CallJsClass : UIView<WKUIDelegate,WKNavigationDelegate,UIWebViewDelegate>
+(instancetype)OCCallJs;

//BCT 调用js使用
-(void)ExecuFun:(NSString*)function backResultBlock:(synCallSuccessBlock)succBlock backFailBlock:(callFailBlock)failBlock currentViewFun:(UIView*)curentView;
//调用这个 函数 返回 jsonsting
-(void)ExecuFun:(NSString*)function backResultBlock:(synCallSuccessBlock)succBlock backFailBlock:(callFailBlock)failBlock backAsynResultBlock:(asynCallSuccessBlock)asynResult currentViewFun:(UIView*)curentView;


//工厂创建该对象
+(instancetype)createJsObject;

//币种通用调用js
-(void)ExecuFun:(NSString*)function backResultBlock:(synCallSuccessBlock)succBlock backFailBlock:(callFailBlock)failBlock backAsynResultBlock:(asynCallSuccessBlock)asynResult currencyName:(currencyType)cName currentViewFun:(UIView*)curentView;

-(void)ExecuFun:(NSString*)function backResultBlock:(synCallSuccessBlock)succBlock backFailBlock:(callFailBlock)failBlock currencyName:(currencyType)cName currentViewFun:(UIView*)curentView;

//ios 系统webview
-(void)getAddressExecuFun:(NSString*)function backResultBlock:(synCallSuccessBlock)succBlock backFailBlock:(callFailBlock)failBlock currencyName:(currencyType)cName currentViewFun:(UIView*)curentView;
@end
