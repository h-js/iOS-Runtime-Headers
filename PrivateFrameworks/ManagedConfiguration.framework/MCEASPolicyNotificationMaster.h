/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCEASPolicyNotificationMaster : NSObject <EASPreflightUI> {
}

+ (id)sharedInstance;

- (void)abortPreflighter:(id)arg1;
- (void)dealloc;
- (void)handleNewPolicyRequest;
- (void)preflighter:(id)arg1 encounteredError:(id)arg2;
- (void)preflighter:(id)arg1 needsComplianceWithPolicy:(id)arg2;
- (void)preflighterSuccess:(id)arg1;

@end
