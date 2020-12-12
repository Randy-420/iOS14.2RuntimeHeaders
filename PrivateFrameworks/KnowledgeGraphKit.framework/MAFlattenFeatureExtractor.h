/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
 */

@interface MAFlattenFeatureExtractor : MAFeatureExtractor {
    NSArray * _featureExtractors;
    NSArray * _featureNames;
    NSString * _name;
}

@property (nonatomic, readonly) NSArray *featureExtractors;

- (void).cxx_destruct;
- (id)defaultFloatVectorWithError:(id*)arg1;
- (id)featureExtractors;
- (id)featureNames;
- (id)floatVectorWithEntity:(id)arg1 error:(id*)arg2;
- (id)initWithName:(id)arg1 featureExtractors:(id)arg2;
- (id)name;

@end