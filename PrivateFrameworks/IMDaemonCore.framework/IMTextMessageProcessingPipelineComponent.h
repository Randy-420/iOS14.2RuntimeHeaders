/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMTextMessageProcessingPipelineComponent : IMPipelineComponent {
    IMDAccount * _account;
    IMDMessageStore * _messageStore;
}

- (void).cxx_destruct;
- (bool)canSuppressMessageWithInput:(id)arg1;
- (unsigned long long)computeFlagsForInput:(id)arg1;
- (id)createMessageItemWithInput:(id)arg1;
- (id)initWithAccount:(id)arg1 messageStore:(id)arg2;
- (id)runIndividuallyWithInput:(id)arg1;

@end
