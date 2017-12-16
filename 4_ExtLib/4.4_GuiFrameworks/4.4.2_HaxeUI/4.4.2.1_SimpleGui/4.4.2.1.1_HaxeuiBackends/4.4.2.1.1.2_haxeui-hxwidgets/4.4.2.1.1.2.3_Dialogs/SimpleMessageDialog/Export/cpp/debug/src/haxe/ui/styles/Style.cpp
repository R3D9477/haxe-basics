// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d9d9665b5ee789a4_8_new,"haxe.ui.styles.Style","new",0x2c473849,"haxe.ui.styles.Style.new","haxe/ui/styles/Style.hx",8,0x438ac9a8)
HX_LOCAL_STACK_FRAME(_hx_pos_d9d9665b5ee789a4_90_apply,"haxe.ui.styles.Style","apply",0xc1c77997,"haxe.ui.styles.Style.apply","haxe/ui/styles/Style.hx",90,0x438ac9a8)
HX_LOCAL_STACK_FRAME(_hx_pos_d9d9665b5ee789a4_190_equalTo,"haxe.ui.styles.Style","equalTo",0x442d7eb8,"haxe.ui.styles.Style.equalTo","haxe/ui/styles/Style.hx",190,0x438ac9a8)
HX_LOCAL_STACK_FRAME(_hx_pos_d9d9665b5ee789a4_275_assignNulls,"haxe.ui.styles.Style","assignNulls",0x51167046,"haxe.ui.styles.Style.assignNulls","haxe/ui/styles/Style.hx",275,0x438ac9a8)
HX_LOCAL_STACK_FRAME(_hx_pos_d9d9665b5ee789a4_301_set_padding,"haxe.ui.styles.Style","set_padding",0x56cfb9dd,"haxe.ui.styles.Style.set_padding","haxe/ui/styles/Style.hx",301,0x438ac9a8)
HX_LOCAL_STACK_FRAME(_hx_pos_d9d9665b5ee789a4_306_margin,"haxe.ui.styles.Style","margin",0xf7571fe5,"haxe.ui.styles.Style.margin","haxe/ui/styles/Style.hx",306,0x438ac9a8)
namespace haxe{
namespace ui{
namespace styles{

void Style_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d9d9665b5ee789a4_8_new)
            	}

Dynamic Style_obj::__CreateEmpty() { return new Style_obj; }

void *Style_obj::_hx_vtable = 0;

Dynamic Style_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Style_obj > _hx_result = new Style_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Style_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x23ee4ab5;
}

void Style_obj::apply( ::haxe::ui::styles::Style s){
            	HX_STACKFRAME(&_hx_pos_d9d9665b5ee789a4_90_apply)
HXLINE(  91)		if (hx::IsNotNull( s->cursor )) {
HXLINE(  91)			this->cursor = s->cursor;
            		}
HXLINE(  92)		if (hx::IsNotNull( s->hidden )) {
HXLINE(  92)			this->hidden = s->hidden;
            		}
HXLINE(  94)		if (hx::IsNotNull( s->autoWidth )) {
HXLINE(  94)			this->autoWidth = s->autoWidth;
            		}
HXLINE(  95)		if (hx::IsNotNull( s->autoHeight )) {
HXLINE(  95)			this->autoHeight = s->autoHeight;
            		}
HXLINE(  96)		if (hx::IsNotNull( s->verticalSpacing )) {
HXLINE(  96)			this->verticalSpacing = s->verticalSpacing;
            		}
HXLINE(  97)		if (hx::IsNotNull( s->horizontalSpacing )) {
HXLINE(  97)			this->horizontalSpacing = s->horizontalSpacing;
            		}
HXLINE(  99)		if (hx::IsNotNull( s->offsetLeft )) {
HXLINE(  99)			this->offsetLeft = s->offsetLeft;
            		}
HXLINE( 100)		if (hx::IsNotNull( s->offsetTop )) {
HXLINE( 100)			this->offsetTop = s->offsetTop;
            		}
HXLINE( 102)		if (hx::IsNotNull( s->width )) {
HXLINE( 103)			this->width = s->width;
HXLINE( 104)			this->autoWidth = false;
            		}
HXLINE( 106)		if (hx::IsNotNull( s->height )) {
HXLINE( 107)			this->height = s->height;
HXLINE( 108)			this->autoHeight = false;
            		}
HXLINE( 110)		if (hx::IsNotNull( s->percentWidth )) {
HXLINE( 111)			this->percentWidth = s->percentWidth;
HXLINE( 112)			this->autoWidth = false;
            		}
HXLINE( 114)		if (hx::IsNotNull( s->percentHeight )) {
HXLINE( 115)			this->percentHeight = s->percentHeight;
HXLINE( 116)			this->autoHeight = false;
            		}
HXLINE( 119)		if (hx::IsNotNull( s->paddingTop )) {
HXLINE( 119)			this->paddingTop = s->paddingTop;
            		}
HXLINE( 120)		if (hx::IsNotNull( s->paddingLeft )) {
HXLINE( 120)			this->paddingLeft = s->paddingLeft;
            		}
HXLINE( 121)		if (hx::IsNotNull( s->paddingRight )) {
HXLINE( 121)			this->paddingRight = s->paddingRight;
            		}
HXLINE( 122)		if (hx::IsNotNull( s->paddingBottom )) {
HXLINE( 122)			this->paddingBottom = s->paddingBottom;
            		}
HXLINE( 124)		if (hx::IsNotNull( s->marginTop )) {
HXLINE( 124)			this->marginTop = s->marginTop;
            		}
HXLINE( 125)		if (hx::IsNotNull( s->marginLeft )) {
HXLINE( 125)			this->marginLeft = s->marginLeft;
            		}
HXLINE( 126)		if (hx::IsNotNull( s->marginRight )) {
HXLINE( 126)			this->marginRight = s->marginRight;
            		}
HXLINE( 127)		if (hx::IsNotNull( s->marginBottom )) {
HXLINE( 127)			this->marginBottom = s->marginBottom;
            		}
HXLINE( 129)		if (hx::IsNotNull( s->color )) {
HXLINE( 129)			this->color = s->color;
            		}
HXLINE( 131)		if (hx::IsNotNull( s->backgroundColor )) {
HXLINE( 132)			this->backgroundColor = s->backgroundColor;
HXLINE( 133)			this->backgroundColorEnd = null();
            		}
HXLINE( 135)		if (hx::IsNotNull( s->backgroundColorEnd )) {
HXLINE( 135)			this->backgroundColorEnd = s->backgroundColorEnd;
            		}
HXLINE( 136)		if (hx::IsNotNull( s->backgroundGradientStyle )) {
HXLINE( 136)			this->backgroundGradientStyle = s->backgroundGradientStyle;
            		}
HXLINE( 137)		if (hx::IsNotNull( s->backgroundOpacity )) {
HXLINE( 137)			this->backgroundOpacity = s->backgroundOpacity;
            		}
HXLINE( 139)		if (hx::IsNotNull( s->backgroundImage )) {
HXLINE( 139)			this->backgroundImage = s->backgroundImage;
            		}
HXLINE( 140)		if (hx::IsNotNull( s->backgroundImageRepeat )) {
HXLINE( 140)			this->backgroundImageRepeat = s->backgroundImageRepeat;
            		}
HXLINE( 142)		if (hx::IsNotNull( s->backgroundImageClipTop )) {
HXLINE( 142)			this->backgroundImageClipTop = s->backgroundImageClipTop;
            		}
HXLINE( 143)		if (hx::IsNotNull( s->backgroundImageClipLeft )) {
HXLINE( 143)			this->backgroundImageClipLeft = s->backgroundImageClipLeft;
            		}
HXLINE( 144)		if (hx::IsNotNull( s->backgroundImageClipBottom )) {
HXLINE( 144)			this->backgroundImageClipBottom = s->backgroundImageClipBottom;
            		}
HXLINE( 145)		if (hx::IsNotNull( s->backgroundImageClipRight )) {
HXLINE( 145)			this->backgroundImageClipRight = s->backgroundImageClipRight;
            		}
HXLINE( 147)		if (hx::IsNotNull( s->backgroundImageSliceTop )) {
HXLINE( 147)			this->backgroundImageSliceTop = s->backgroundImageSliceTop;
            		}
HXLINE( 148)		if (hx::IsNotNull( s->backgroundImageSliceLeft )) {
HXLINE( 148)			this->backgroundImageSliceLeft = s->backgroundImageSliceLeft;
            		}
HXLINE( 149)		if (hx::IsNotNull( s->backgroundImageSliceBottom )) {
HXLINE( 149)			this->backgroundImageSliceBottom = s->backgroundImageSliceBottom;
            		}
HXLINE( 150)		if (hx::IsNotNull( s->backgroundImageSliceRight )) {
HXLINE( 150)			this->backgroundImageSliceRight = s->backgroundImageSliceRight;
            		}
HXLINE( 152)		if (hx::IsNotNull( s->borderColor )) {
HXLINE( 152)			this->borderColor = s->borderColor;
            		}
HXLINE( 153)		if (hx::IsNotNull( s->borderTopColor )) {
HXLINE( 153)			this->borderTopColor = s->borderTopColor;
            		}
HXLINE( 154)		if (hx::IsNotNull( s->borderLeftColor )) {
HXLINE( 154)			this->borderLeftColor = s->borderLeftColor;
            		}
HXLINE( 155)		if (hx::IsNotNull( s->borderBottomColor )) {
HXLINE( 155)			this->borderBottomColor = s->borderBottomColor;
            		}
HXLINE( 156)		if (hx::IsNotNull( s->borderRightColor )) {
HXLINE( 156)			this->borderRightColor = s->borderRightColor;
            		}
HXLINE( 158)		if (hx::IsNotNull( s->borderSize )) {
HXLINE( 158)			this->borderSize = s->borderSize;
            		}
HXLINE( 159)		if (hx::IsNotNull( s->borderTopSize )) {
HXLINE( 159)			this->borderTopSize = s->borderTopSize;
            		}
HXLINE( 160)		if (hx::IsNotNull( s->borderLeftSize )) {
HXLINE( 160)			this->borderLeftSize = s->borderLeftSize;
            		}
HXLINE( 161)		if (hx::IsNotNull( s->borderBottomSize )) {
HXLINE( 161)			this->borderBottomSize = s->borderBottomSize;
            		}
HXLINE( 162)		if (hx::IsNotNull( s->borderRightSize )) {
HXLINE( 162)			this->borderRightSize = s->borderRightSize;
            		}
HXLINE( 164)		if (hx::IsNotNull( s->borderRadius )) {
HXLINE( 164)			this->borderRadius = s->borderRadius;
            		}
HXLINE( 165)		if (hx::IsNotNull( s->borderOpacity )) {
HXLINE( 165)			this->borderOpacity = s->borderOpacity;
            		}
HXLINE( 167)		if (hx::IsNotNull( s->filter )) {
HXLINE( 167)			this->filter = s->filter->copy();
            		}
HXLINE( 169)		if (hx::IsNotNull( s->icon )) {
HXLINE( 169)			this->icon = s->icon;
            		}
HXLINE( 170)		if (hx::IsNotNull( s->iconPosition )) {
HXLINE( 170)			this->iconPosition = s->iconPosition;
            		}
HXLINE( 172)		if (hx::IsNotNull( s->horizontalAlign )) {
HXLINE( 172)			this->horizontalAlign = s->horizontalAlign;
            		}
HXLINE( 173)		if (hx::IsNotNull( s->verticalAlign )) {
HXLINE( 173)			this->verticalAlign = s->verticalAlign;
            		}
HXLINE( 174)		if (hx::IsNotNull( s->textAlign )) {
HXLINE( 174)			this->textAlign = s->textAlign;
            		}
HXLINE( 176)		if (hx::IsNotNull( s->opacity )) {
HXLINE( 176)			this->opacity = s->opacity;
            		}
HXLINE( 178)		if (hx::IsNotNull( s->clip )) {
HXLINE( 178)			this->clip = s->clip;
            		}
HXLINE( 179)		if (hx::IsNotNull( s->native )) {
HXLINE( 179)			this->native = s->native;
            		}
HXLINE( 181)		if (hx::IsNotNull( s->fontName )) {
HXLINE( 181)			this->fontName = s->fontName;
            		}
HXLINE( 182)		if (hx::IsNotNull( s->fontSize )) {
HXLINE( 182)			this->fontSize = s->fontSize;
            		}
HXLINE( 183)		if (hx::IsNotNull( s->fontBold )) {
HXLINE( 183)			this->fontBold = s->fontBold;
            		}
HXLINE( 184)		if (hx::IsNotNull( s->fontUnderline )) {
HXLINE( 184)			this->fontUnderline = s->fontUnderline;
            		}
HXLINE( 185)		if (hx::IsNotNull( s->fontItalic )) {
HXLINE( 185)			this->fontItalic = s->fontItalic;
            		}
HXLINE( 187)		this->assignNulls();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,apply,(void))

bool Style_obj::equalTo( ::haxe::ui::styles::Style s){
            	HX_STACKFRAME(&_hx_pos_d9d9665b5ee789a4_190_equalTo)
HXLINE( 191)		if ((s->cursor != this->cursor)) {
HXLINE( 191)			return false;
            		}
HXLINE( 192)		if (hx::IsNotEq( s->hidden,this->hidden )) {
HXLINE( 192)			return false;
            		}
HXLINE( 194)		if (hx::IsNotEq( s->autoWidth,this->autoWidth )) {
HXLINE( 194)			return false;
            		}
HXLINE( 195)		if (hx::IsNotEq( s->autoHeight,this->autoHeight )) {
HXLINE( 195)			return false;
            		}
HXLINE( 196)		if (hx::IsNotEq( s->verticalSpacing,this->verticalSpacing )) {
HXLINE( 196)			return false;
            		}
HXLINE( 197)		if (hx::IsNotEq( s->horizontalSpacing,this->horizontalSpacing )) {
HXLINE( 197)			return false;
            		}
HXLINE( 199)		if (hx::IsNotEq( s->offsetLeft,this->offsetLeft )) {
HXLINE( 199)			return false;
            		}
HXLINE( 200)		if (hx::IsNotEq( s->offsetTop,this->offsetTop )) {
HXLINE( 200)			return false;
            		}
HXLINE( 202)		if (hx::IsNotEq( s->width,this->width )) {
HXLINE( 202)			return false;
            		}
HXLINE( 203)		if (hx::IsNotEq( s->height,this->height )) {
HXLINE( 203)			return false;
            		}
HXLINE( 204)		if (hx::IsNotEq( s->percentWidth,this->percentWidth )) {
HXLINE( 204)			return false;
            		}
HXLINE( 205)		if (hx::IsNotEq( s->percentHeight,this->percentHeight )) {
HXLINE( 205)			return false;
            		}
HXLINE( 207)		if (hx::IsNotEq( s->paddingTop,this->paddingTop )) {
HXLINE( 207)			return false;
            		}
HXLINE( 208)		if (hx::IsNotEq( s->paddingLeft,this->paddingLeft )) {
HXLINE( 208)			return false;
            		}
HXLINE( 209)		if (hx::IsNotEq( s->paddingRight,this->paddingRight )) {
HXLINE( 209)			return false;
            		}
HXLINE( 210)		if (hx::IsNotEq( s->paddingBottom,this->paddingBottom )) {
HXLINE( 210)			return false;
            		}
HXLINE( 212)		if (hx::IsNotEq( s->marginTop,this->marginTop )) {
HXLINE( 212)			return false;
            		}
HXLINE( 213)		if (hx::IsNotEq( s->marginLeft,this->marginLeft )) {
HXLINE( 213)			return false;
            		}
HXLINE( 214)		if (hx::IsNotEq( s->marginRight,this->marginRight )) {
HXLINE( 214)			return false;
            		}
HXLINE( 215)		if (hx::IsNotEq( s->marginBottom,this->marginBottom )) {
HXLINE( 215)			return false;
            		}
HXLINE( 217)		if (hx::IsNotEq( s->color,this->color )) {
HXLINE( 217)			return false;
            		}
HXLINE( 219)		if (hx::IsNotEq( s->backgroundColor,this->backgroundColor )) {
HXLINE( 219)			return false;
            		}
HXLINE( 220)		if (hx::IsNotEq( s->backgroundColorEnd,this->backgroundColorEnd )) {
HXLINE( 220)			return false;
            		}
HXLINE( 221)		if ((s->backgroundGradientStyle != this->backgroundGradientStyle)) {
HXLINE( 221)			return false;
            		}
HXLINE( 222)		if (hx::IsNotEq( s->backgroundOpacity,this->backgroundOpacity )) {
HXLINE( 222)			return false;
            		}
HXLINE( 224)		if ((s->backgroundImage != this->backgroundImage)) {
HXLINE( 224)			return false;
            		}
HXLINE( 225)		if ((s->backgroundImageRepeat != this->backgroundImageRepeat)) {
HXLINE( 225)			return false;
            		}
HXLINE( 227)		if (hx::IsNotEq( s->backgroundImageClipTop,this->backgroundImageClipTop )) {
HXLINE( 227)			return false;
            		}
HXLINE( 228)		if (hx::IsNotEq( s->backgroundImageClipLeft,this->backgroundImageClipLeft )) {
HXLINE( 228)			return false;
            		}
HXLINE( 229)		if (hx::IsNotEq( s->backgroundImageClipBottom,this->backgroundImageClipBottom )) {
HXLINE( 229)			return false;
            		}
HXLINE( 230)		if (hx::IsNotEq( s->backgroundImageClipRight,this->backgroundImageClipRight )) {
HXLINE( 230)			return false;
            		}
HXLINE( 232)		if (hx::IsNotEq( s->backgroundImageSliceTop,this->backgroundImageSliceTop )) {
HXLINE( 232)			return false;
            		}
HXLINE( 233)		if (hx::IsNotEq( s->backgroundImageSliceLeft,this->backgroundImageSliceLeft )) {
HXLINE( 233)			return false;
            		}
HXLINE( 234)		if (hx::IsNotEq( s->backgroundImageSliceBottom,this->backgroundImageSliceBottom )) {
HXLINE( 234)			return false;
            		}
HXLINE( 235)		if (hx::IsNotEq( s->backgroundImageSliceRight,this->backgroundImageSliceRight )) {
HXLINE( 235)			return false;
            		}
HXLINE( 237)		if (hx::IsNotEq( s->borderColor,this->borderColor )) {
HXLINE( 237)			return false;
            		}
HXLINE( 238)		if (hx::IsNotEq( s->borderTopColor,this->borderTopColor )) {
HXLINE( 238)			return false;
            		}
HXLINE( 239)		if (hx::IsNotEq( s->borderLeftColor,this->borderLeftColor )) {
HXLINE( 239)			return false;
            		}
HXLINE( 240)		if (hx::IsNotEq( s->borderBottomColor,this->borderBottomColor )) {
HXLINE( 240)			return false;
            		}
HXLINE( 241)		if (hx::IsNotEq( s->borderRightColor,this->borderRightColor )) {
HXLINE( 241)			return false;
            		}
HXLINE( 243)		if (hx::IsNotEq( s->borderSize,this->borderSize )) {
HXLINE( 243)			return false;
            		}
HXLINE( 244)		if (hx::IsNotEq( s->borderTopSize,this->borderTopSize )) {
HXLINE( 244)			return false;
            		}
HXLINE( 245)		if (hx::IsNotEq( s->borderLeftSize,this->borderLeftSize )) {
HXLINE( 245)			return false;
            		}
HXLINE( 246)		if (hx::IsNotEq( s->borderBottomSize,this->borderBottomSize )) {
HXLINE( 246)			return false;
            		}
HXLINE( 247)		if (hx::IsNotEq( s->borderRightSize,this->borderRightSize )) {
HXLINE( 247)			return false;
            		}
HXLINE( 249)		if (hx::IsNotEq( s->borderRadius,this->borderRadius )) {
HXLINE( 249)			return false;
            		}
HXLINE( 250)		if (hx::IsNotEq( s->borderOpacity,this->borderOpacity )) {
HXLINE( 250)			return false;
            		}
HXLINE( 252)		if (hx::IsNotEq( s->filter,this->filter )) {
HXLINE( 252)			return false;
            		}
HXLINE( 254)		if ((s->icon != this->icon)) {
HXLINE( 254)			return false;
            		}
HXLINE( 255)		if ((s->iconPosition != this->iconPosition)) {
HXLINE( 255)			return false;
            		}
HXLINE( 257)		if ((s->horizontalAlign != this->horizontalAlign)) {
HXLINE( 257)			return false;
            		}
HXLINE( 258)		if ((s->verticalAlign != this->verticalAlign)) {
HXLINE( 258)			return false;
            		}
HXLINE( 259)		if ((s->textAlign != this->textAlign)) {
HXLINE( 259)			return false;
            		}
HXLINE( 261)		if (hx::IsNotEq( s->opacity,this->opacity )) {
HXLINE( 261)			return false;
            		}
HXLINE( 263)		if (hx::IsNotEq( s->clip,this->clip )) {
HXLINE( 263)			return false;
            		}
HXLINE( 264)		if (hx::IsNotEq( s->native,this->native )) {
HXLINE( 264)			return false;
            		}
HXLINE( 266)		if ((s->fontName != this->fontName)) {
HXLINE( 266)			return false;
            		}
HXLINE( 267)		if (hx::IsNotEq( s->fontSize,this->fontSize )) {
HXLINE( 267)			return false;
            		}
HXLINE( 268)		if (hx::IsNotEq( s->fontBold,this->fontBold )) {
HXLINE( 268)			return false;
            		}
HXLINE( 269)		if (hx::IsNotEq( s->fontUnderline,this->fontUnderline )) {
HXLINE( 269)			return false;
            		}
HXLINE( 270)		if (hx::IsNotEq( s->fontItalic,this->fontItalic )) {
HXLINE( 270)			return false;
            		}
HXLINE( 272)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,equalTo,return )

void Style_obj::assignNulls(){
            	HX_STACKFRAME(&_hx_pos_d9d9665b5ee789a4_275_assignNulls)
HXLINE( 276)		if (hx::IsEq( this->color,(int)-2147483648 )) {
HXLINE( 276)			this->color = null();
            		}
HXLINE( 277)		if (hx::IsEq( this->backgroundColor,(int)-2147483648 )) {
HXLINE( 278)			this->backgroundColor = null();
HXLINE( 279)			this->backgroundColorEnd = null();
            		}
HXLINE( 281)		if (hx::IsEq( this->backgroundColorEnd,(int)-2147483648 )) {
HXLINE( 282)			this->backgroundColor = null();
HXLINE( 283)			this->backgroundColorEnd = null();
            		}
HXLINE( 285)		if (hx::IsEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->borderSize),(int)-2147483648 )) {
HXLINE( 285)			this->borderSize = null();
            		}
HXLINE( 286)		if (hx::IsEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->borderTopSize),(int)-2147483648 )) {
HXLINE( 286)			this->borderTopSize = null();
            		}
HXLINE( 287)		if (hx::IsEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->borderLeftSize),(int)-2147483648 )) {
HXLINE( 287)			this->borderLeftSize = null();
            		}
HXLINE( 288)		if (hx::IsEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->borderBottomSize),(int)-2147483648 )) {
HXLINE( 288)			this->borderBottomSize = null();
            		}
HXLINE( 289)		if (hx::IsEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->borderRightSize),(int)-2147483648 )) {
HXLINE( 289)			this->borderRightSize = null();
            		}
HXLINE( 290)		if (hx::IsEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->borderRadius),(int)-2147483648 )) {
HXLINE( 290)			this->borderRadius = null();
            		}
HXLINE( 291)		if (hx::IsEq( this->borderColor,(int)-2147483648 )) {
HXLINE( 291)			this->borderColor = null();
            		}
HXLINE( 292)		if (hx::IsEq( this->borderTopColor,(int)-2147483648 )) {
HXLINE( 292)			this->borderTopColor = null();
            		}
HXLINE( 293)		if (hx::IsEq( this->borderLeftColor,(int)-2147483648 )) {
HXLINE( 293)			this->borderLeftColor = null();
            		}
HXLINE( 294)		if (hx::IsEq( this->borderBottomColor,(int)-2147483648 )) {
HXLINE( 294)			this->borderBottomColor = null();
            		}
HXLINE( 295)		if (hx::IsEq( this->borderRightColor,(int)-2147483648 )) {
HXLINE( 295)			this->borderRightColor = null();
            		}
HXLINE( 296)		bool _hx_tmp;
HXDLIN( 296)		if (hx::IsNotNull( this->filter )) {
HXLINE( 296)			_hx_tmp = hx::IsEq( this->filter->__get((int)0),HX_("none",b8,12,0a,49) );
            		}
            		else {
HXLINE( 296)			_hx_tmp = false;
            		}
HXDLIN( 296)		if (_hx_tmp) {
HXLINE( 296)			this->filter = null();
            		}
HXLINE( 297)		if ((this->icon == HX_("none",b8,12,0a,49))) {
HXLINE( 297)			this->icon = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,assignNulls,(void))

 ::haxe::ui::util::VariantType Style_obj::set_padding( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_d9d9665b5ee789a4_301_set_padding)
HXLINE( 302)		this->paddingTop = (this->paddingLeft = (this->paddingRight = (this->paddingBottom = value)));
HXLINE( 303)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_padding,return )

void Style_obj::margin( ::haxe::ui::util::VariantType v){
            	HX_STACKFRAME(&_hx_pos_d9d9665b5ee789a4_306_margin)
HXLINE( 307)		this->marginTop = v;
HXLINE( 308)		this->marginLeft = v;
HXLINE( 309)		this->marginRight = v;
HXLINE( 310)		this->marginBottom = v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,margin,(void))


hx::ObjectPtr< Style_obj > Style_obj::__new() {
	hx::ObjectPtr< Style_obj > __this = new Style_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Style_obj > Style_obj::__alloc(hx::Ctx *_hx_ctx) {
	Style_obj *__this = (Style_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Style_obj), true, "haxe.ui.styles.Style"));
	*(void **)__this = Style_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Style_obj::Style_obj()
{
}

void Style_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Style);
	HX_MARK_MEMBER_NAME(cursor,"cursor");
	HX_MARK_MEMBER_NAME(hidden,"hidden");
	HX_MARK_MEMBER_NAME(autoWidth,"autoWidth");
	HX_MARK_MEMBER_NAME(autoHeight,"autoHeight");
	HX_MARK_MEMBER_NAME(verticalSpacing,"verticalSpacing");
	HX_MARK_MEMBER_NAME(horizontalSpacing,"horizontalSpacing");
	HX_MARK_MEMBER_NAME(offsetLeft,"offsetLeft");
	HX_MARK_MEMBER_NAME(offsetTop,"offsetTop");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(percentWidth,"percentWidth");
	HX_MARK_MEMBER_NAME(percentHeight,"percentHeight");
	HX_MARK_MEMBER_NAME(paddingTop,"paddingTop");
	HX_MARK_MEMBER_NAME(paddingLeft,"paddingLeft");
	HX_MARK_MEMBER_NAME(paddingRight,"paddingRight");
	HX_MARK_MEMBER_NAME(paddingBottom,"paddingBottom");
	HX_MARK_MEMBER_NAME(marginTop,"marginTop");
	HX_MARK_MEMBER_NAME(marginLeft,"marginLeft");
	HX_MARK_MEMBER_NAME(marginRight,"marginRight");
	HX_MARK_MEMBER_NAME(marginBottom,"marginBottom");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(backgroundColorEnd,"backgroundColorEnd");
	HX_MARK_MEMBER_NAME(backgroundGradientStyle,"backgroundGradientStyle");
	HX_MARK_MEMBER_NAME(backgroundOpacity,"backgroundOpacity");
	HX_MARK_MEMBER_NAME(backgroundImage,"backgroundImage");
	HX_MARK_MEMBER_NAME(backgroundImageRepeat,"backgroundImageRepeat");
	HX_MARK_MEMBER_NAME(backgroundImageClipTop,"backgroundImageClipTop");
	HX_MARK_MEMBER_NAME(backgroundImageClipLeft,"backgroundImageClipLeft");
	HX_MARK_MEMBER_NAME(backgroundImageClipBottom,"backgroundImageClipBottom");
	HX_MARK_MEMBER_NAME(backgroundImageClipRight,"backgroundImageClipRight");
	HX_MARK_MEMBER_NAME(backgroundImageSliceTop,"backgroundImageSliceTop");
	HX_MARK_MEMBER_NAME(backgroundImageSliceLeft,"backgroundImageSliceLeft");
	HX_MARK_MEMBER_NAME(backgroundImageSliceBottom,"backgroundImageSliceBottom");
	HX_MARK_MEMBER_NAME(backgroundImageSliceRight,"backgroundImageSliceRight");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(borderTopColor,"borderTopColor");
	HX_MARK_MEMBER_NAME(borderLeftColor,"borderLeftColor");
	HX_MARK_MEMBER_NAME(borderBottomColor,"borderBottomColor");
	HX_MARK_MEMBER_NAME(borderRightColor,"borderRightColor");
	HX_MARK_MEMBER_NAME(borderSize,"borderSize");
	HX_MARK_MEMBER_NAME(borderTopSize,"borderTopSize");
	HX_MARK_MEMBER_NAME(borderLeftSize,"borderLeftSize");
	HX_MARK_MEMBER_NAME(borderBottomSize,"borderBottomSize");
	HX_MARK_MEMBER_NAME(borderRightSize,"borderRightSize");
	HX_MARK_MEMBER_NAME(borderRadius,"borderRadius");
	HX_MARK_MEMBER_NAME(borderOpacity,"borderOpacity");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(icon,"icon");
	HX_MARK_MEMBER_NAME(iconPosition,"iconPosition");
	HX_MARK_MEMBER_NAME(horizontalAlign,"horizontalAlign");
	HX_MARK_MEMBER_NAME(verticalAlign,"verticalAlign");
	HX_MARK_MEMBER_NAME(textAlign,"textAlign");
	HX_MARK_MEMBER_NAME(opacity,"opacity");
	HX_MARK_MEMBER_NAME(clip,"clip");
	HX_MARK_MEMBER_NAME(native,"native");
	HX_MARK_MEMBER_NAME(fontName,"fontName");
	HX_MARK_MEMBER_NAME(fontSize,"fontSize");
	HX_MARK_MEMBER_NAME(fontBold,"fontBold");
	HX_MARK_MEMBER_NAME(fontUnderline,"fontUnderline");
	HX_MARK_MEMBER_NAME(fontItalic,"fontItalic");
	HX_MARK_MEMBER_NAME(padding,"padding");
	HX_MARK_END_CLASS();
}

void Style_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cursor,"cursor");
	HX_VISIT_MEMBER_NAME(hidden,"hidden");
	HX_VISIT_MEMBER_NAME(autoWidth,"autoWidth");
	HX_VISIT_MEMBER_NAME(autoHeight,"autoHeight");
	HX_VISIT_MEMBER_NAME(verticalSpacing,"verticalSpacing");
	HX_VISIT_MEMBER_NAME(horizontalSpacing,"horizontalSpacing");
	HX_VISIT_MEMBER_NAME(offsetLeft,"offsetLeft");
	HX_VISIT_MEMBER_NAME(offsetTop,"offsetTop");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(percentWidth,"percentWidth");
	HX_VISIT_MEMBER_NAME(percentHeight,"percentHeight");
	HX_VISIT_MEMBER_NAME(paddingTop,"paddingTop");
	HX_VISIT_MEMBER_NAME(paddingLeft,"paddingLeft");
	HX_VISIT_MEMBER_NAME(paddingRight,"paddingRight");
	HX_VISIT_MEMBER_NAME(paddingBottom,"paddingBottom");
	HX_VISIT_MEMBER_NAME(marginTop,"marginTop");
	HX_VISIT_MEMBER_NAME(marginLeft,"marginLeft");
	HX_VISIT_MEMBER_NAME(marginRight,"marginRight");
	HX_VISIT_MEMBER_NAME(marginBottom,"marginBottom");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(backgroundColorEnd,"backgroundColorEnd");
	HX_VISIT_MEMBER_NAME(backgroundGradientStyle,"backgroundGradientStyle");
	HX_VISIT_MEMBER_NAME(backgroundOpacity,"backgroundOpacity");
	HX_VISIT_MEMBER_NAME(backgroundImage,"backgroundImage");
	HX_VISIT_MEMBER_NAME(backgroundImageRepeat,"backgroundImageRepeat");
	HX_VISIT_MEMBER_NAME(backgroundImageClipTop,"backgroundImageClipTop");
	HX_VISIT_MEMBER_NAME(backgroundImageClipLeft,"backgroundImageClipLeft");
	HX_VISIT_MEMBER_NAME(backgroundImageClipBottom,"backgroundImageClipBottom");
	HX_VISIT_MEMBER_NAME(backgroundImageClipRight,"backgroundImageClipRight");
	HX_VISIT_MEMBER_NAME(backgroundImageSliceTop,"backgroundImageSliceTop");
	HX_VISIT_MEMBER_NAME(backgroundImageSliceLeft,"backgroundImageSliceLeft");
	HX_VISIT_MEMBER_NAME(backgroundImageSliceBottom,"backgroundImageSliceBottom");
	HX_VISIT_MEMBER_NAME(backgroundImageSliceRight,"backgroundImageSliceRight");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(borderTopColor,"borderTopColor");
	HX_VISIT_MEMBER_NAME(borderLeftColor,"borderLeftColor");
	HX_VISIT_MEMBER_NAME(borderBottomColor,"borderBottomColor");
	HX_VISIT_MEMBER_NAME(borderRightColor,"borderRightColor");
	HX_VISIT_MEMBER_NAME(borderSize,"borderSize");
	HX_VISIT_MEMBER_NAME(borderTopSize,"borderTopSize");
	HX_VISIT_MEMBER_NAME(borderLeftSize,"borderLeftSize");
	HX_VISIT_MEMBER_NAME(borderBottomSize,"borderBottomSize");
	HX_VISIT_MEMBER_NAME(borderRightSize,"borderRightSize");
	HX_VISIT_MEMBER_NAME(borderRadius,"borderRadius");
	HX_VISIT_MEMBER_NAME(borderOpacity,"borderOpacity");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(icon,"icon");
	HX_VISIT_MEMBER_NAME(iconPosition,"iconPosition");
	HX_VISIT_MEMBER_NAME(horizontalAlign,"horizontalAlign");
	HX_VISIT_MEMBER_NAME(verticalAlign,"verticalAlign");
	HX_VISIT_MEMBER_NAME(textAlign,"textAlign");
	HX_VISIT_MEMBER_NAME(opacity,"opacity");
	HX_VISIT_MEMBER_NAME(clip,"clip");
	HX_VISIT_MEMBER_NAME(native,"native");
	HX_VISIT_MEMBER_NAME(fontName,"fontName");
	HX_VISIT_MEMBER_NAME(fontSize,"fontSize");
	HX_VISIT_MEMBER_NAME(fontBold,"fontBold");
	HX_VISIT_MEMBER_NAME(fontUnderline,"fontUnderline");
	HX_VISIT_MEMBER_NAME(fontItalic,"fontItalic");
	HX_VISIT_MEMBER_NAME(padding,"padding");
}

hx::Val Style_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { return hx::Val( icon ); }
		if (HX_FIELD_EQ(inName,"clip") ) { return hx::Val( clip ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"color") ) { return hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"apply") ) { return hx::Val( apply_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { return hx::Val( cursor ); }
		if (HX_FIELD_EQ(inName,"hidden") ) { return hx::Val( hidden ); }
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"filter") ) { return hx::Val( filter ); }
		if (HX_FIELD_EQ(inName,"native") ) { return hx::Val( native ); }
		if (HX_FIELD_EQ(inName,"margin") ) { return hx::Val( margin_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { return hx::Val( opacity ); }
		if (HX_FIELD_EQ(inName,"equalTo") ) { return hx::Val( equalTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"padding") ) { return hx::Val( padding ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { return hx::Val( fontName ); }
		if (HX_FIELD_EQ(inName,"fontSize") ) { return hx::Val( fontSize ); }
		if (HX_FIELD_EQ(inName,"fontBold") ) { return hx::Val( fontBold ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoWidth") ) { return hx::Val( autoWidth ); }
		if (HX_FIELD_EQ(inName,"offsetTop") ) { return hx::Val( offsetTop ); }
		if (HX_FIELD_EQ(inName,"marginTop") ) { return hx::Val( marginTop ); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { return hx::Val( textAlign ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoHeight") ) { return hx::Val( autoHeight ); }
		if (HX_FIELD_EQ(inName,"offsetLeft") ) { return hx::Val( offsetLeft ); }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { return hx::Val( paddingTop ); }
		if (HX_FIELD_EQ(inName,"marginLeft") ) { return hx::Val( marginLeft ); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { return hx::Val( borderSize ); }
		if (HX_FIELD_EQ(inName,"fontItalic") ) { return hx::Val( fontItalic ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { return hx::Val( paddingLeft ); }
		if (HX_FIELD_EQ(inName,"marginRight") ) { return hx::Val( marginRight ); }
		if (HX_FIELD_EQ(inName,"borderColor") ) { return hx::Val( borderColor ); }
		if (HX_FIELD_EQ(inName,"assignNulls") ) { return hx::Val( assignNulls_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_padding") ) { return hx::Val( set_padding_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"percentWidth") ) { return hx::Val( percentWidth ); }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { return hx::Val( paddingRight ); }
		if (HX_FIELD_EQ(inName,"marginBottom") ) { return hx::Val( marginBottom ); }
		if (HX_FIELD_EQ(inName,"borderRadius") ) { return hx::Val( borderRadius ); }
		if (HX_FIELD_EQ(inName,"iconPosition") ) { return hx::Val( iconPosition ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"percentHeight") ) { return hx::Val( percentHeight ); }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { return hx::Val( paddingBottom ); }
		if (HX_FIELD_EQ(inName,"borderTopSize") ) { return hx::Val( borderTopSize ); }
		if (HX_FIELD_EQ(inName,"borderOpacity") ) { return hx::Val( borderOpacity ); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { return hx::Val( verticalAlign ); }
		if (HX_FIELD_EQ(inName,"fontUnderline") ) { return hx::Val( fontUnderline ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"borderTopColor") ) { return hx::Val( borderTopColor ); }
		if (HX_FIELD_EQ(inName,"borderLeftSize") ) { return hx::Val( borderLeftSize ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"verticalSpacing") ) { return hx::Val( verticalSpacing ); }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return hx::Val( backgroundColor ); }
		if (HX_FIELD_EQ(inName,"backgroundImage") ) { return hx::Val( backgroundImage ); }
		if (HX_FIELD_EQ(inName,"borderLeftColor") ) { return hx::Val( borderLeftColor ); }
		if (HX_FIELD_EQ(inName,"borderRightSize") ) { return hx::Val( borderRightSize ); }
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { return hx::Val( horizontalAlign ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"borderRightColor") ) { return hx::Val( borderRightColor ); }
		if (HX_FIELD_EQ(inName,"borderBottomSize") ) { return hx::Val( borderBottomSize ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"horizontalSpacing") ) { return hx::Val( horizontalSpacing ); }
		if (HX_FIELD_EQ(inName,"backgroundOpacity") ) { return hx::Val( backgroundOpacity ); }
		if (HX_FIELD_EQ(inName,"borderBottomColor") ) { return hx::Val( borderBottomColor ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"backgroundColorEnd") ) { return hx::Val( backgroundColorEnd ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"backgroundImageRepeat") ) { return hx::Val( backgroundImageRepeat ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"backgroundImageClipTop") ) { return hx::Val( backgroundImageClipTop ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"backgroundGradientStyle") ) { return hx::Val( backgroundGradientStyle ); }
		if (HX_FIELD_EQ(inName,"backgroundImageClipLeft") ) { return hx::Val( backgroundImageClipLeft ); }
		if (HX_FIELD_EQ(inName,"backgroundImageSliceTop") ) { return hx::Val( backgroundImageSliceTop ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"backgroundImageClipRight") ) { return hx::Val( backgroundImageClipRight ); }
		if (HX_FIELD_EQ(inName,"backgroundImageSliceLeft") ) { return hx::Val( backgroundImageSliceLeft ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"backgroundImageClipBottom") ) { return hx::Val( backgroundImageClipBottom ); }
		if (HX_FIELD_EQ(inName,"backgroundImageSliceRight") ) { return hx::Val( backgroundImageSliceRight ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"backgroundImageSliceBottom") ) { return hx::Val( backgroundImageSliceBottom ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Style_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { icon=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clip") ) { clip=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { cursor=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hidden") ) { hidden=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"native") ) { native=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { opacity=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"padding") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_padding(inValue.Cast<  ::haxe::ui::util::VariantType >()) );padding=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { fontName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontSize") ) { fontSize=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontBold") ) { fontBold=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoWidth") ) { autoWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetTop") ) { offsetTop=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"marginTop") ) { marginTop=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textAlign") ) { textAlign=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoHeight") ) { autoHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetLeft") ) { offsetLeft=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { paddingTop=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"marginLeft") ) { marginLeft=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderSize") ) { borderSize=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontItalic") ) { fontItalic=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { paddingLeft=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"marginRight") ) { marginRight=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { borderColor=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"percentWidth") ) { percentWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { paddingRight=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"marginBottom") ) { marginBottom=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderRadius") ) { borderRadius=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iconPosition") ) { iconPosition=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"percentHeight") ) { percentHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { paddingBottom=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderTopSize") ) { borderTopSize=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderOpacity") ) { borderOpacity=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { verticalAlign=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontUnderline") ) { fontUnderline=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"borderTopColor") ) { borderTopColor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderLeftSize") ) { borderLeftSize=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"verticalSpacing") ) { verticalSpacing=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundImage") ) { backgroundImage=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderLeftColor") ) { borderLeftColor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderRightSize") ) { borderRightSize=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { horizontalAlign=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"borderRightColor") ) { borderRightColor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderBottomSize") ) { borderBottomSize=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"horizontalSpacing") ) { horizontalSpacing=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundOpacity") ) { backgroundOpacity=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderBottomColor") ) { borderBottomColor=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"backgroundColorEnd") ) { backgroundColorEnd=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"backgroundImageRepeat") ) { backgroundImageRepeat=inValue.Cast< ::String >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"backgroundImageClipTop") ) { backgroundImageClipTop=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"backgroundGradientStyle") ) { backgroundGradientStyle=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundImageClipLeft") ) { backgroundImageClipLeft=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundImageSliceTop") ) { backgroundImageSliceTop=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"backgroundImageClipRight") ) { backgroundImageClipRight=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundImageSliceLeft") ) { backgroundImageSliceLeft=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"backgroundImageClipBottom") ) { backgroundImageClipBottom=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundImageSliceRight") ) { backgroundImageSliceRight=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"backgroundImageSliceBottom") ) { backgroundImageSliceBottom=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Style_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e"));
	outFields->push(HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c"));
	outFields->push(HX_HCSTRING("autoWidth","\x17","\xf4","\x6d","\xa8"));
	outFields->push(HX_HCSTRING("autoHeight","\xb6","\x18","\x17","\x6e"));
	outFields->push(HX_HCSTRING("verticalSpacing","\xad","\xb9","\xa6","\xfa"));
	outFields->push(HX_HCSTRING("horizontalSpacing","\xff","\x82","\xed","\x70"));
	outFields->push(HX_HCSTRING("offsetLeft","\x3a","\x91","\xc7","\x43"));
	outFields->push(HX_HCSTRING("offsetTop","\xc2","\x44","\xc3","\x41"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe"));
	outFields->push(HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10"));
	outFields->push(HX_HCSTRING("paddingTop","\x44","\xfd","\x05","\x3a"));
	outFields->push(HX_HCSTRING("paddingLeft","\x78","\x4a","\xe6","\x85"));
	outFields->push(HX_HCSTRING("paddingRight","\x4b","\xec","\xa7","\x1a"));
	outFields->push(HX_HCSTRING("paddingBottom","\x9c","\x67","\x99","\x4f"));
	outFields->push(HX_HCSTRING("marginTop","\x07","\x7f","\x40","\xee"));
	outFields->push(HX_HCSTRING("marginLeft","\x55","\x53","\xdd","\x84"));
	outFields->push(HX_HCSTRING("marginRight","\xce","\xa4","\xd8","\x33"));
	outFields->push(HX_HCSTRING("marginBottom","\xb9","\x21","\x0a","\x41"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));
	outFields->push(HX_HCSTRING("backgroundColorEnd","\x46","\xf8","\x6e","\x2a"));
	outFields->push(HX_HCSTRING("backgroundGradientStyle","\x53","\x34","\x9a","\x0d"));
	outFields->push(HX_HCSTRING("backgroundOpacity","\x7d","\x6b","\xa7","\x64"));
	outFields->push(HX_HCSTRING("backgroundImage","\x8d","\xfc","\x53","\x80"));
	outFields->push(HX_HCSTRING("backgroundImageRepeat","\xc8","\x6f","\xdc","\x43"));
	outFields->push(HX_HCSTRING("backgroundImageClipTop","\x98","\x58","\x30","\x79"));
	outFields->push(HX_HCSTRING("backgroundImageClipLeft","\xa4","\xd8","\xcb","\x8b"));
	outFields->push(HX_HCSTRING("backgroundImageClipBottom","\xc8","\xd8","\x9f","\xc4"));
	outFields->push(HX_HCSTRING("backgroundImageClipRight","\x9f","\xc4","\x9e","\x3d"));
	outFields->push(HX_HCSTRING("backgroundImageSliceTop","\x10","\xe7","\x36","\xb3"));
	outFields->push(HX_HCSTRING("backgroundImageSliceLeft","\x2c","\xf3","\x81","\x17"));
	outFields->push(HX_HCSTRING("backgroundImageSliceBottom","\x50","\xa5","\xf7","\x3d"));
	outFields->push(HX_HCSTRING("backgroundImageSliceRight","\x17","\xe1","\x3f","\xf1"));
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("borderTopColor","\x9a","\x53","\xb1","\xa1"));
	outFields->push(HX_HCSTRING("borderLeftColor","\x50","\xf5","\xf1","\xa9"));
	outFields->push(HX_HCSTRING("borderBottomColor","\xec","\xe0","\x49","\x43"));
	outFields->push(HX_HCSTRING("borderRightColor","\xf3","\x87","\x4e","\x61"));
	outFields->push(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06"));
	outFields->push(HX_HCSTRING("borderTopSize","\x6a","\x32","\x3e","\x22"));
	outFields->push(HX_HCSTRING("borderLeftSize","\x74","\xb9","\xd3","\x5c"));
	outFields->push(HX_HCSTRING("borderBottomSize","\x58","\x35","\x68","\x45"));
	outFields->push(HX_HCSTRING("borderRightSize","\x31","\x8c","\xcf","\x01"));
	outFields->push(HX_HCSTRING("borderRadius","\x5e","\x0a","\x30","\x0e"));
	outFields->push(HX_HCSTRING("borderOpacity","\x3f","\xee","\x3e","\x20"));
	outFields->push(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"));
	outFields->push(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45"));
	outFields->push(HX_HCSTRING("iconPosition","\x42","\xe5","\x38","\x76"));
	outFields->push(HX_HCSTRING("horizontalAlign","\x41","\x8f","\x67","\xf4"));
	outFields->push(HX_HCSTRING("verticalAlign","\x6f","\x1e","\x7c","\xe4"));
	outFields->push(HX_HCSTRING("textAlign","\xd8","\xe6","\x7e","\xba"));
	outFields->push(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));
	outFields->push(HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"));
	outFields->push(HX_HCSTRING("native","\x97","\xc9","\x1c","\x22"));
	outFields->push(HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb"));
	outFields->push(HX_HCSTRING("fontSize","\x30","\xbe","\xd1","\xce"));
	outFields->push(HX_HCSTRING("fontBold","\xf4","\x9e","\x99","\xc3"));
	outFields->push(HX_HCSTRING("fontUnderline","\x3d","\xe5","\xa6","\xf7"));
	outFields->push(HX_HCSTRING("fontItalic","\x1f","\xc6","\xb7","\xba"));
	outFields->push(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Style_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Style_obj,cursor),HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Style_obj,hidden),HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Style_obj,autoWidth),HX_HCSTRING("autoWidth","\x17","\xf4","\x6d","\xa8")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Style_obj,autoHeight),HX_HCSTRING("autoHeight","\xb6","\x18","\x17","\x6e")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,verticalSpacing),HX_HCSTRING("verticalSpacing","\xad","\xb9","\xa6","\xfa")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,horizontalSpacing),HX_HCSTRING("horizontalSpacing","\xff","\x82","\xed","\x70")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,offsetLeft),HX_HCSTRING("offsetLeft","\x3a","\x91","\xc7","\x43")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,offsetTop),HX_HCSTRING("offsetTop","\xc2","\x44","\xc3","\x41")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Style_obj,percentWidth),HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Style_obj,percentHeight),HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,paddingTop),HX_HCSTRING("paddingTop","\x44","\xfd","\x05","\x3a")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,paddingLeft),HX_HCSTRING("paddingLeft","\x78","\x4a","\xe6","\x85")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,paddingRight),HX_HCSTRING("paddingRight","\x4b","\xec","\xa7","\x1a")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,paddingBottom),HX_HCSTRING("paddingBottom","\x9c","\x67","\x99","\x4f")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,marginTop),HX_HCSTRING("marginTop","\x07","\x7f","\x40","\xee")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,marginLeft),HX_HCSTRING("marginLeft","\x55","\x53","\xdd","\x84")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,marginRight),HX_HCSTRING("marginRight","\xce","\xa4","\xd8","\x33")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,marginBottom),HX_HCSTRING("marginBottom","\xb9","\x21","\x0a","\x41")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Style_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Style_obj,backgroundColor),HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Style_obj,backgroundColorEnd),HX_HCSTRING("backgroundColorEnd","\x46","\xf8","\x6e","\x2a")},
	{hx::fsString,(int)offsetof(Style_obj,backgroundGradientStyle),HX_HCSTRING("backgroundGradientStyle","\x53","\x34","\x9a","\x0d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Style_obj,backgroundOpacity),HX_HCSTRING("backgroundOpacity","\x7d","\x6b","\xa7","\x64")},
	{hx::fsString,(int)offsetof(Style_obj,backgroundImage),HX_HCSTRING("backgroundImage","\x8d","\xfc","\x53","\x80")},
	{hx::fsString,(int)offsetof(Style_obj,backgroundImageRepeat),HX_HCSTRING("backgroundImageRepeat","\xc8","\x6f","\xdc","\x43")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,backgroundImageClipTop),HX_HCSTRING("backgroundImageClipTop","\x98","\x58","\x30","\x79")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,backgroundImageClipLeft),HX_HCSTRING("backgroundImageClipLeft","\xa4","\xd8","\xcb","\x8b")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,backgroundImageClipBottom),HX_HCSTRING("backgroundImageClipBottom","\xc8","\xd8","\x9f","\xc4")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,backgroundImageClipRight),HX_HCSTRING("backgroundImageClipRight","\x9f","\xc4","\x9e","\x3d")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,backgroundImageSliceTop),HX_HCSTRING("backgroundImageSliceTop","\x10","\xe7","\x36","\xb3")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,backgroundImageSliceLeft),HX_HCSTRING("backgroundImageSliceLeft","\x2c","\xf3","\x81","\x17")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,backgroundImageSliceBottom),HX_HCSTRING("backgroundImageSliceBottom","\x50","\xa5","\xf7","\x3d")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,backgroundImageSliceRight),HX_HCSTRING("backgroundImageSliceRight","\x17","\xe1","\x3f","\xf1")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Style_obj,borderColor),HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Style_obj,borderTopColor),HX_HCSTRING("borderTopColor","\x9a","\x53","\xb1","\xa1")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Style_obj,borderLeftColor),HX_HCSTRING("borderLeftColor","\x50","\xf5","\xf1","\xa9")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Style_obj,borderBottomColor),HX_HCSTRING("borderBottomColor","\xec","\xe0","\x49","\x43")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Style_obj,borderRightColor),HX_HCSTRING("borderRightColor","\xf3","\x87","\x4e","\x61")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,borderSize),HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,borderTopSize),HX_HCSTRING("borderTopSize","\x6a","\x32","\x3e","\x22")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,borderLeftSize),HX_HCSTRING("borderLeftSize","\x74","\xb9","\xd3","\x5c")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,borderBottomSize),HX_HCSTRING("borderBottomSize","\x58","\x35","\x68","\x45")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,borderRightSize),HX_HCSTRING("borderRightSize","\x31","\x8c","\xcf","\x01")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,borderRadius),HX_HCSTRING("borderRadius","\x5e","\x0a","\x30","\x0e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Style_obj,borderOpacity),HX_HCSTRING("borderOpacity","\x3f","\xee","\x3e","\x20")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Style_obj,filter),HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85")},
	{hx::fsString,(int)offsetof(Style_obj,icon),HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45")},
	{hx::fsString,(int)offsetof(Style_obj,iconPosition),HX_HCSTRING("iconPosition","\x42","\xe5","\x38","\x76")},
	{hx::fsString,(int)offsetof(Style_obj,horizontalAlign),HX_HCSTRING("horizontalAlign","\x41","\x8f","\x67","\xf4")},
	{hx::fsString,(int)offsetof(Style_obj,verticalAlign),HX_HCSTRING("verticalAlign","\x6f","\x1e","\x7c","\xe4")},
	{hx::fsString,(int)offsetof(Style_obj,textAlign),HX_HCSTRING("textAlign","\xd8","\xe6","\x7e","\xba")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Style_obj,opacity),HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Style_obj,clip),HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Style_obj,native),HX_HCSTRING("native","\x97","\xc9","\x1c","\x22")},
	{hx::fsString,(int)offsetof(Style_obj,fontName),HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,fontSize),HX_HCSTRING("fontSize","\x30","\xbe","\xd1","\xce")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Style_obj,fontBold),HX_HCSTRING("fontBold","\xf4","\x9e","\x99","\xc3")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Style_obj,fontUnderline),HX_HCSTRING("fontUnderline","\x3d","\xe5","\xa6","\xf7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Style_obj,fontItalic),HX_HCSTRING("fontItalic","\x1f","\xc6","\xb7","\xba")},
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(Style_obj,padding),HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Style_obj_sStaticStorageInfo = 0;
#endif

static ::String Style_obj_sMemberFields[] = {
	HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e"),
	HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c"),
	HX_HCSTRING("autoWidth","\x17","\xf4","\x6d","\xa8"),
	HX_HCSTRING("autoHeight","\xb6","\x18","\x17","\x6e"),
	HX_HCSTRING("verticalSpacing","\xad","\xb9","\xa6","\xfa"),
	HX_HCSTRING("horizontalSpacing","\xff","\x82","\xed","\x70"),
	HX_HCSTRING("offsetLeft","\x3a","\x91","\xc7","\x43"),
	HX_HCSTRING("offsetTop","\xc2","\x44","\xc3","\x41"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe"),
	HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10"),
	HX_HCSTRING("paddingTop","\x44","\xfd","\x05","\x3a"),
	HX_HCSTRING("paddingLeft","\x78","\x4a","\xe6","\x85"),
	HX_HCSTRING("paddingRight","\x4b","\xec","\xa7","\x1a"),
	HX_HCSTRING("paddingBottom","\x9c","\x67","\x99","\x4f"),
	HX_HCSTRING("marginTop","\x07","\x7f","\x40","\xee"),
	HX_HCSTRING("marginLeft","\x55","\x53","\xdd","\x84"),
	HX_HCSTRING("marginRight","\xce","\xa4","\xd8","\x33"),
	HX_HCSTRING("marginBottom","\xb9","\x21","\x0a","\x41"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"),
	HX_HCSTRING("backgroundColorEnd","\x46","\xf8","\x6e","\x2a"),
	HX_HCSTRING("backgroundGradientStyle","\x53","\x34","\x9a","\x0d"),
	HX_HCSTRING("backgroundOpacity","\x7d","\x6b","\xa7","\x64"),
	HX_HCSTRING("backgroundImage","\x8d","\xfc","\x53","\x80"),
	HX_HCSTRING("backgroundImageRepeat","\xc8","\x6f","\xdc","\x43"),
	HX_HCSTRING("backgroundImageClipTop","\x98","\x58","\x30","\x79"),
	HX_HCSTRING("backgroundImageClipLeft","\xa4","\xd8","\xcb","\x8b"),
	HX_HCSTRING("backgroundImageClipBottom","\xc8","\xd8","\x9f","\xc4"),
	HX_HCSTRING("backgroundImageClipRight","\x9f","\xc4","\x9e","\x3d"),
	HX_HCSTRING("backgroundImageSliceTop","\x10","\xe7","\x36","\xb3"),
	HX_HCSTRING("backgroundImageSliceLeft","\x2c","\xf3","\x81","\x17"),
	HX_HCSTRING("backgroundImageSliceBottom","\x50","\xa5","\xf7","\x3d"),
	HX_HCSTRING("backgroundImageSliceRight","\x17","\xe1","\x3f","\xf1"),
	HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"),
	HX_HCSTRING("borderTopColor","\x9a","\x53","\xb1","\xa1"),
	HX_HCSTRING("borderLeftColor","\x50","\xf5","\xf1","\xa9"),
	HX_HCSTRING("borderBottomColor","\xec","\xe0","\x49","\x43"),
	HX_HCSTRING("borderRightColor","\xf3","\x87","\x4e","\x61"),
	HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06"),
	HX_HCSTRING("borderTopSize","\x6a","\x32","\x3e","\x22"),
	HX_HCSTRING("borderLeftSize","\x74","\xb9","\xd3","\x5c"),
	HX_HCSTRING("borderBottomSize","\x58","\x35","\x68","\x45"),
	HX_HCSTRING("borderRightSize","\x31","\x8c","\xcf","\x01"),
	HX_HCSTRING("borderRadius","\x5e","\x0a","\x30","\x0e"),
	HX_HCSTRING("borderOpacity","\x3f","\xee","\x3e","\x20"),
	HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"),
	HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45"),
	HX_HCSTRING("iconPosition","\x42","\xe5","\x38","\x76"),
	HX_HCSTRING("horizontalAlign","\x41","\x8f","\x67","\xf4"),
	HX_HCSTRING("verticalAlign","\x6f","\x1e","\x7c","\xe4"),
	HX_HCSTRING("textAlign","\xd8","\xe6","\x7e","\xba"),
	HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"),
	HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"),
	HX_HCSTRING("native","\x97","\xc9","\x1c","\x22"),
	HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb"),
	HX_HCSTRING("fontSize","\x30","\xbe","\xd1","\xce"),
	HX_HCSTRING("fontBold","\xf4","\x9e","\x99","\xc3"),
	HX_HCSTRING("fontUnderline","\x3d","\xe5","\xa6","\xf7"),
	HX_HCSTRING("fontItalic","\x1f","\xc6","\xb7","\xba"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	HX_HCSTRING("equalTo","\x4f","\x6e","\x9d","\x34"),
	HX_HCSTRING("assignNulls","\x5d","\x77","\x2b","\x5b"),
	HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"),
	HX_HCSTRING("set_padding","\xf4","\xc0","\xe4","\x60"),
	HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"),
	::String(null()) };

static void Style_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Style_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Style_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Style_obj::__mClass,"__mClass");
};

#endif

hx::Class Style_obj::__mClass;

void Style_obj::__register()
{
	hx::Object *dummy = new Style_obj;
	Style_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.styles.Style","\xd7","\x5f","\xc9","\x98");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Style_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Style_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Style_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Style_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Style_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Style_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
