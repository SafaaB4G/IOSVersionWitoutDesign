// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
enum SJFluidSegmentedControlTransitionStyle : NSInteger;
enum SJFluidSegmentedControlShapeStyle : NSInteger;
@class UIColor;
@class UIFont;
@class NSCoder;

/// A segmented control with custom appearance and interactive animations.
SWIFT_CLASS("_TtC23SJFluidSegmentedControl23SJFluidSegmentedControl")
@interface SJFluidSegmentedControl : UIView <UIGestureRecognizerDelegate>
/// The object that acts as the data source of the segmented control.
@property (nonatomic, weak) IBOutlet id _Nullable dataSource;
/// The object that acts as the delegate of the segmented control.
@property (nonatomic, weak) IBOutlet id _Nullable delegate;
/// The index of the currently selected segment. It ranges from 0 to segmentsCount-1.
@property (nonatomic) NSInteger currentSegment;
/// The number of segments in the segmented control. Default is <code>1</code>.
@property (nonatomic, readonly) NSInteger segmentsCount;
/// The transition style between the default and selected state of the segments. Default is <code>.fade</code>.
@property (nonatomic) enum SJFluidSegmentedControlTransitionStyle transitionStyle;
/// The style of the selecton shape. Default is <code>.liquid</code>.
@property (nonatomic) enum SJFluidSegmentedControlShapeStyle shapeStyle;
/// The corner radius of the segmented control. Default is <code>0.0</code>.
@property (nonatomic) CGFloat cornerRadius;
/// The color of the text for the default state of a segment. Default is <code>.black</code>. This property will be overriden if the delegate for attributed titles/views is implemented.
@property (nonatomic, strong) UIColor * _Nonnull textColor;
/// The color of the text for the selected state of a segment. Default is <code>.white</code>. This property will be overriden if the delegate for attributed titles for selected state or views for selected state is implemented.
@property (nonatomic, strong) UIColor * _Nonnull selectedSegmentTextColor;
/// The text font for the titles of the segmented control in both states if the data source does not provide attributed titles or views. Default is <code>.systemFont(ofSize: 14)</code>.
@property (nonatomic, strong) UIFont * _Nonnull textFont;
/// The color of the selector. Default is <code>.clear</code>. <em>Note:</em> If set, it is overlayed over the gradient colors.
@property (nonatomic, strong) UIColor * _Nonnull selectorViewColor;
/// A boolean value to determine whether the selector should have rounded corners. Default is <code>false</code>.
@property (nonatomic) BOOL applyCornerRadiusToSelectorView;
/// The color for the bounce if the data source does not provide colors for bounces. Default is <code>.red</code>.
@property (nonatomic, strong) UIColor * _Nonnull gradientBounceColor;
/// The duration of the show shadow animation. Default is <code>0.5</code>.
@property (nonatomic) CGFloat shadowShowDuration;
/// The duration of the hide shadow animation. Default is <code>0.8</code>.
@property (nonatomic) CGFloat shadowHideDuration;
/// A boolean value to determine whether shadows should be applied. Default is <code>true</code>.
@property (nonatomic) BOOL shadowsEnabled;
/// Initializes the segmented control with a specified frame rectangle.
/// \param frame The frame rectangle for the segmented control view, measured in points.
///
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
/// Returns an object initialized from data in a given unarchiver.
/// \param aDecoder An unarchiver object.
///
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// Lays out subviews.
- (void)layoutSubviews;
/// Sets the currently selected segment.
/// \param index The index of the currently selected segment.
///
/// \param shouldAnimate <code>true</code> if the change should be animated, otherwise <code>false</code>.
///
- (void)setCurrentSegmentIndex:(NSInteger)index animated:(BOOL)shouldAnimate;
/// Reloads the segments of the segmented control.
- (void)reloadData;
@end

@class UIScrollView;

@interface SJFluidSegmentedControl (SWIFT_EXTENSION(SJFluidSegmentedControl)) <UIScrollViewDelegate>
/// Tells the delegate when the scroll view is about to start scrolling the content.
/// \param scrollView The scroll-view object that is about to scroll the content view.
///
- (void)scrollViewWillBeginDragging:(UIScrollView * _Nonnull)scrollView;
/// Tells the delegate when the user finishes scrolling the content.
/// \param scrollView The scroll-view object where the user ended the touch.
///
/// \param velocity The velocity of the scroll view (in points) at the moment the touch was released.
///
/// \param targetContentOffset The expected offset when the scrolling action decelerates to a stop.
///
- (void)scrollViewWillEndDragging:(UIScrollView * _Nonnull)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(CGPoint * _Nonnull)targetContentOffset;
/// Tells the delegate that the scroll view has ended decelerating the scrolling movement.
/// \param scrollView The scroll-view object that is decelerating the scrolling of the content view.
///
- (void)scrollViewDidEndDecelerating:(UIScrollView * _Nonnull)scrollView;
/// Tells the delegate when a scrolling animation in the scroll view concludes.
/// \param scrollView The scroll-view object that is performing the scrolling animation.
///
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView * _Nonnull)scrollView;
/// Tells the delegate when the user scrolls the content view within the receiver.
/// \param scrollView The scroll-view object that is performing the scrolling animation.
///
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
@end

/// The bounce location.
/// <ul>
///   <li>
///     left:  Left bounce.
///   </li>
///   <li>
///     right: Right bounce.
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, SJFluidSegmentedControlBounce) {
  SJFluidSegmentedControlBounceLeft = 0,
  SJFluidSegmentedControlBounceRight = 1,
};

@class NSAttributedString;

/// SJFluidSegmentedControl Data Source Protocol
SWIFT_PROTOCOL("_TtP23SJFluidSegmentedControl33SJFluidSegmentedControlDataSource_")
@protocol SJFluidSegmentedControlDataSource
/// <em>Required.</em> Tells the data source to return the number of segments in a segmented control.
/// \param segmentedControl The segmented control object requesting this information.
///
///
/// returns:
/// The number of segments.
- (NSInteger)numberOfSegmentsInSegmentedControl:(SJFluidSegmentedControl * _Nonnull)segmentedControl SWIFT_WARN_UNUSED_RESULT;
@optional
/// Asks the data source for the gradient colors of a selected segment in a segmented control.
/// \param segmentedControl The segmented control object asking for the gradient colors.
///
/// \param index An index number identifying a segment of a <code>segmentedControl</code>.
///
///
/// returns:
/// An array of colors to form a gradient.
- (NSArray<UIColor *> * _Nonnull)segmentedControl:(SJFluidSegmentedControl * _Nonnull)segmentedControl gradientColorsForSelectedSegmentAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
/// Asks the data source for the gradient colors for bounce in a segmented control.
/// \param segmentedControl The segmented control object asking for the gradient colors.
///
/// \param bounce The bounce type.
///
///
/// returns:
/// An array of colors to form a gradient.
- (NSArray<UIColor *> * _Nonnull)segmentedControl:(SJFluidSegmentedControl * _Nonnull)segmentedControl gradientColorsForBounce:(enum SJFluidSegmentedControlBounce)bounce SWIFT_WARN_UNUSED_RESULT;
/// Asks the data source for the title of a segment at an index in a segmented control.
/// \param segmentedControl The segmented control object asking for the title.
///
/// \param index An index number identifying a segment of <code>segmentedControl</code>.
///
///
/// returns:
/// A string to use as the title of a segment. If you return <code>nil</code>, the segment will have no title.
- (NSString * _Nullable)segmentedControl:(SJFluidSegmentedControl * _Nonnull)segmentedControl titleForSegmentAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
/// Asks the data source for an attributed title of a segment at an index in a segmented control.
/// \param segmentedControl The segmented control object asking for the attributed title.
///
/// \param index An index number identifying a segment of <code>segmentedControl</code>.
///
///
/// returns:
/// An attributed string to use as the title of a segment. If you return <code>nil</code>, the segment will have no title.
- (NSAttributedString * _Nullable)segmentedControl:(SJFluidSegmentedControl * _Nonnull)segmentedControl attributedTitleForSegmentAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
/// Asks the data source for the title of a selected segment at an index in a segmented control.
/// \param segmentedControl The segmented control object asking for the title.
///
/// \param index An index number identifying a segment of <code>segmentedControl</code>.
///
///
/// returns:
/// A string to use as the title of the selected segment. If you return <code>nil</code>, the segment will have no title.
- (NSString * _Nullable)segmentedControl:(SJFluidSegmentedControl * _Nonnull)segmentedControl titleForSelectedSegmentAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
/// Asks the data source for the attributed title of a selected segment at an index in a segmented control.
/// \param segmentedControl The segmented control object asking for the attributed title.
///
/// \param index An index number identifying a segment of <code>segmentedControl</code>.
///
///
/// returns:
/// An attributed string to use as the title of the selected segment. If you return <code>nil</code>, the segment will have no title.
- (NSAttributedString * _Nullable)segmentedControl:(SJFluidSegmentedControl * _Nonnull)segmentedControl attributedTitleForSelectedSegmentAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
/// Asks the data source for a color for the title of a selected segment at an index in a segmented control.
/// \param segmentedControl The segmented control object asking for the selected title color.
///
/// \param index An index number identifying a segment of <code>segmentedControl</code>.
///
///
/// returns:
/// A color to use as a foreground color for the selected segment’s title.
- (UIColor * _Nonnull)segmentedControl:(SJFluidSegmentedControl * _Nonnull)segmentedControl titleColorForSelectedSegmentAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
/// Asks the data source for a view of a segment at an index in a segmented control.
/// \param segmentedControl The segmented control object asking for the view.
///
/// \param index An index number identifying a segment of <code>segmentedControl</code>.
///
///
/// returns:
/// A view for the segment.
- (UIView * _Nonnull)segmentedControl:(SJFluidSegmentedControl * _Nonnull)segmentedControl viewForSegmentAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
/// Asks the data source for a view of a selected segment at an index in a segmented control.
/// \param segmentedControl The segmented control object asking for the view.
///
/// \param index An index number identifying a segment of <code>segmentedControl</code>.
///
///
/// returns:
/// A view for the selected segment.
- (UIView * _Nonnull)segmentedControl:(SJFluidSegmentedControl * _Nonnull)segmentedControl viewForSelectedSegmentAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
@end


/// SJFluidSegmentedControl Delegate Protocol
SWIFT_PROTOCOL("_TtP23SJFluidSegmentedControl31SJFluidSegmentedControlDelegate_")
@protocol SJFluidSegmentedControlDelegate
@optional
/// Tells the delegate that the segmented control’s selected segment index changed.
/// \param segmentedControl A segmented control object informing the delegate about the new index change.
///
/// \param fromIndex The segment index <em>from</em> which the selection changed.
///
/// \param toIndex The segment index <em>to</em> which the selection changed.
///
- (void)segmentedControl:(SJFluidSegmentedControl * _Nonnull)segmentedControl didChangeFromSegmentAtIndex:(NSInteger)fromIndex toSegmentAtIndex:(NSInteger)toIndex;
/// Tells the delegate the the segmented control’s selected segment index is about to be changed.
/// \param segmentedControl A segmented control object informing the delegate about the impending index change.
///
/// \param fromSegment The segment index <em>from</em> which the selection changed.
///
- (void)segmentedControl:(SJFluidSegmentedControl * _Nonnull)segmentedControl willChangeFromSegment:(NSInteger)fromSegment;
/// Tells the delegate that the segmented control’s offset changed.
/// \param segmentedControl The segmented control object that performed the scrolling operation.
///
/// \param offset The <code>x</code> coordinate of the offset.
///
- (void)segmentedControl:(SJFluidSegmentedControl * _Nonnull)segmentedControl didScrollWithXOffset:(CGFloat)offset;
/// Asks the delegate to setup a segment with a custom transition style.
/// \param segmentedControl The segmented control object asking for the custom transition.
///
/// \param segmentIndex The index of the segment to setup.
///
/// \param unselectedSegmentView The view for the unselected (default) state of the segment.
///
/// \param selectedSegmentView The view for the selected state of the segment.
///
/// \param percent The selection’s percentage. This value is in range [-1..1]. The value -1 represents a state in which the selection’s right edge is coincident with the left edge of a segment. Values from -1 to 0 represent states in which the selection’s right edge is moving from the left edge to the right edge of a segment. The value 0 represents a fully selected state. Values from 0 to 1 represent states in which the selection’s left edge is moving from the left edge to the right edge of a segment. Value 1 represents a state in which the selection’s left edge is coincident with the right edge of a segment.
///
- (void)segmentedControl:(SJFluidSegmentedControl * _Nonnull)segmentedControl setupSegmentAtIndex:(NSInteger)segmentIndex unselectedView:(UIView * _Nonnull)unselectedSegmentView selectedView:(UIView * _Nonnull)selectedSegmentView withSelectionPercent:(CGFloat)percent;
/// Asks the delegate to reset all customization that has been done in segmentedControl(_:setupSegmentAtIndex:unselectedView:selectedView:withSelectionPercent:). This method is intended for handling switching between transition styles.
/// \param segmentedControl The segmented control object asking the reset.
///
/// \param segmentIndex The index of the segment to reset.
///
/// \param unselectedSegmentView The view for the unselected (default) state of the segment.
///
/// \param selectedSegmentView The view for the selected state of the segment.
///
- (void)segmentedControl:(SJFluidSegmentedControl * _Nonnull)segmentedControl resetSegmentAtIndex:(NSInteger)segmentIndex unselectedView:(UIView * _Nonnull)unselectedSegmentView selectedView:(UIView * _Nonnull)selectedSegmentView;
@end

/// The selection shape style.
/// <ul>
///   <li>
///     roundedRect: Rounded rectangle shape.
///   </li>
///   <li>
///     liquid:      Liquid shape.
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, SJFluidSegmentedControlShapeStyle) {
  SJFluidSegmentedControlShapeStyleRoundedRect = 0,
  SJFluidSegmentedControlShapeStyleLiquid = 1,
};

/// The transition style between the default and selected state of a segment.
/// <ul>
///   <li>
///     none:  No transition. This style is preferred if using a custom transition provided by a delegate implementation.
///   </li>
///   <li>
///     slide: Selected segment view cut by selection is shown on top of the default segment view.
///   </li>
///   <li>
///     fade:  Selected segment alpha is changing to 1.0 and default segment view alpha to 0.0 based on the current position of the selection.
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, SJFluidSegmentedControlTransitionStyle) {
  SJFluidSegmentedControlTransitionStyleNone = 0,
  SJFluidSegmentedControlTransitionStyleSlide = 1,
  SJFluidSegmentedControlTransitionStyleFade = 2,
};


/// View with CAGradientLayer layer class.
SWIFT_CLASS("_TtC23SJFluidSegmentedControl14SJGradientView")
@interface SJGradientView : UIView
/// The UIView’s layer class. Overrided to return CAGradientLayer.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) Class _Nonnull layerClass;)
+ (Class _Nonnull)layerClass SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface UIView (SWIFT_EXTENSION(SJFluidSegmentedControl))
@end

#pragma clang diagnostic pop
