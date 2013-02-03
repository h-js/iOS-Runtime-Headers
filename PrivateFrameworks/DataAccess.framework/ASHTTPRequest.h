/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class ASParseContext, NSHTTPURLResponse, NSURLConnection, NSMutableSet, NSURLRequest;

@interface ASHTTPRequest : NSObject {
    NSMutableSet *_attemptedIdentities;
    NSURLConnection *_connection;
    id _delegate;
    BOOL _didCancel;
    BOOL _didFailWithError;
    BOOL _didFinishLoading;
    BOOL _didReceiveData;
    BOOL _didReceiveResponse;
    BOOL _didReset;
    BOOL _didSendRequest;
    BOOL _forceEDGE;
    BOOL _isFakingIt;
    ASParseContext *_parseContext;
    NSURLRequest *_request;
    NSHTTPURLResponse *_response;
}

+ (struct __SecIdentity { }*)secIdentityForHost:(id)arg1;
+ (void)setSecIdentity:(struct __SecIdentity { }*)arg1 forHost:(id)arg2;
+ (NSUInteger)uniqueQueryID;

- (void)_addAttemptedIdentity:(struct __SecIdentity { }*)arg1;
- (id)_applyAuthenticationChain:(struct __CFArray { }*)arg1 toRequest:(id)arg2;
- (struct __CFData { }*)_copyCertSHA1ForIdentity:(struct __SecIdentity { }*)arg1;
- (BOOL)_haveAttemptedIdentity:(struct __SecIdentity { }*)arg1;
- (void)_initFakeParseContext;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (NSInteger)connectionActionForResponse:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connectionFailedWithError:(id)arg1;
- (id)contentType;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didProcessContext:(id)arg1;
- (void)finishWithError:(id)arg1;
- (BOOL)forceEDGETransport;
- (BOOL)handleCertificateError:(id)arg1;
- (void)loadRequest:(id)arg1;
- (BOOL)processContext:(id)arg1;
- (void)reset;
- (id)responseContentType;
- (void)setDelegate:(id)arg1;
- (void)setForceEDGETransport:(BOOL)arg1;
- (BOOL)shouldHoldPowerAssertion;
- (BOOL)shouldLogIncomingData;
- (void)tearDownResources;
- (void)willProcessContext;

@end
