/* Generated by RuntimeBrowser.
 */

@protocol BNBannerSourceListenerDelegate <NSObject>

@required

- (BNBannerSourceLayoutDescription *)bannerSourceListener:(BNBannerSourceListener *)arg1 layoutDescriptionWithError:(id*)arg2;
- (bool)bannerSourceListener:(BNBannerSourceListener *)arg1 recommendsSuspending:(bool)arg2 forReason:(NSString *)arg3 revokingCurrent:(bool)arg4 error:(id*)arg5;
- (bool)bannerSourceListener:(BNBannerSourceListener *)arg1 requestsPostingPresentable:(id <BNPresentable>)arg2 options:(unsigned long long)arg3 userInfo:(NSDictionary *)arg4 error:(id*)arg5;
- (NSArray *)bannerSourceListener:(BNBannerSourceListener *)arg1 requestsRevokingPresentablesWithIdentification:(id <BNPresentableUniquelyIdentifying>)arg2 reason:(NSString *)arg3 animated:(bool)arg4 userInfo:(NSDictionary *)arg5 error:(id*)arg6;

@optional

- (void)bannerSourceListener:(BNBannerSourceListener *)arg1 presentationSize:(out struct CGSize { double x1; double x2; }*)arg2 containerSize:(out struct CGSize { double x1; double x2; }*)arg3 error:(id*)arg4;
- (bool)bannerSourceListener:(BNBannerSourceListener *)arg1 requestsRevokingAllPresentablesForRequesterWithIdentifier:(NSString *)arg2 reason:(NSString *)arg3 userInfo:(NSDictionary *)arg4 error:(id*)arg5;
- (bool)bannerSourceListener:(BNBannerSourceListener *)arg1 requestsRevokingPresentableWithRequestIdentifier:(NSString *)arg2 requesterIdentifier:(NSString *)arg3 animated:(bool)arg4 reason:(NSString *)arg5 userInfo:(NSDictionary *)arg6 error:(id*)arg7;
- (UIApplicationSceneSpecification *)sceneSpecificationForBannerSourceListener:(BNBannerSourceListener *)arg1;

@end
