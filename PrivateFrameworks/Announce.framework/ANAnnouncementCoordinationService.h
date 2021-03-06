/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Announce.framework/Announce
 */

@interface ANAnnouncementCoordinationService : NSObject {
    RPCompanionLinkClient * _companionLinkClient;
    <ANAnnouncementCoordinationServiceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _rapportQueue;
}

@property (nonatomic, readonly) RPCompanionLinkClient *companionLinkClient;
@property (nonatomic) <ANAnnouncementCoordinationServiceDelegate> *delegate;

- (void).cxx_destruct;
- (void)_registerForEvents;
- (void)_setupLink;
- (void)_tearDownLink;
- (void)broadcastAnnouncementPlayed:(id)arg1;
- (id)companionLinkClient;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
