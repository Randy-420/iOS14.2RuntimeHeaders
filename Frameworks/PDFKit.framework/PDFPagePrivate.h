/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPagePrivate : NSObject {
    bool  akDidSetupRealPageModelController;
    PDFAKPageAdaptor * akPageAdaptor;
    NSMutableArray * annotationChanges;
    NSMutableArray * annotations;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  artBox;
    NSAttributedString * attributedString;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  bleedBox;
    bool  bookmarked;
    _Atomic bool  builtLayout;
    struct CGImage { } * cgImage;
    unsigned int  cgImageOrientation;
    struct CGImageSource { } * cgImageSource;
    NSMutableSet * changedAnnotations;
    bool  colorWidgetBackgrounds;
    bool  creatingDisplayList;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  cropBox;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  dataDetectorsLock;
    bool  didChangeBounds;
    struct CGDisplayList { } * displayList;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  displayListCreationLock;
    bool  displaysAnnotations;
    bool  displaysMarkups;
    PDFDocument * document;
    UIImage * image;
    bool  isFullyConstructed;
    NSString * label;
    struct CGPDFLayout { } * layout;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  layoutLock;
    _Atomic bool  loadedAnnotations;
    NSLock * lock_accessAnnotations;
    NSLock * lock_getAnnotations;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mediaBox;
    struct CGPDFPage { } * page;
    struct CGColor { } * pageBackgroundColorHint;
    bool  ranDataDetectors;
    long long  rotation;
    NSMutableArray * scannedAnnotations;
    NSMutableArray * scannerResults;
    NSString * text;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  trimBox;
    PDFView * view;
    NSMutableDictionary * widgetAnnotationLookup;
}

- (void).cxx_destruct;

@end
