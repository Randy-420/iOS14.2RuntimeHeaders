/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADLogisticRegressionModel : NSObject {
    NSNumber * _appUsageSimilarity;
    NSNumber * _pttr;
}

@property (nonatomic, retain) NSNumber *appUsageSimilarity;
@property (nonatomic, retain) NSNumber *pttr;

- (void).cxx_destruct;
- (id)appUsageSimilarity;
- (id)initWithPTTR:(id)arg1 appUsageSimilarity:(id)arg2;
- (id)predictionWithWeights:(id)arg1;
- (id)pttr;
- (void)setAppUsageSimilarity:(id)arg1;
- (void)setPttr:(id)arg1;
- (float)sigmoid:(float)arg1;

@end