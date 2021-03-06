/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedRouteTrafficIncidentInfo : NSObject <NSSecureCoding> {
    GEORouteIncident * _incident;
    double  _offsetMeters;
    struct { 
        unsigned int index; 
        float offset; 
    }  _routeCoordinate;
}

@property (nonatomic, retain) GEORouteIncident *incident;
@property (nonatomic) double offsetMeters;
@property (nonatomic) struct { unsigned int x1; float x2; } routeCoordinate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)incident;
- (id)initWithCoder:(id)arg1;
- (double)offsetMeters;
- (struct { unsigned int x1; float x2; })routeCoordinate;
- (void)setIncident:(id)arg1;
- (void)setOffsetMeters:(double)arg1;
- (void)setRouteCoordinate:(struct { unsigned int x1; float x2; })arg1;

@end
