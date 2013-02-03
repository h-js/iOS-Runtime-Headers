/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebPolicyDecisionListener, NSString, WebPluginController, NSURLRequest;

@interface WebPluginContainerCheck : NSObject {
    WebPluginController *_controller;
    BOOL _done;
    WebPolicyDecisionListener *_listener;
    NSURLRequest *_request;
    id _resultObject;
    SEL _resultSelector;
    NSString *_target;
}

+ (id)checkWithRequest:(id)arg1 target:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4 controller:(id)arg5;

- (id)_actionInformationWithURL:(id)arg1;
- (void)_askPolicyDelegate;
- (void)_continueWithPolicy:(NSInteger)arg1;
- (BOOL)_isForbiddenFileLoad;
- (void)cancel;
- (void)dealloc;
- (void)finalize;
- (id)initWithRequest:(id)arg1 target:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4 controller:(id)arg5;
- (void)start;

@end
