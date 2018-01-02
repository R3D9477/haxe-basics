// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_CssClass
#include <haxe/ui/styles/CssClass.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_FillStyle
#include <haxe/ui/styles/FillStyle.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Parser
#include <haxe/ui/styles/Parser.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Token
#include <haxe/ui/styles/Token.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Unit
#include <haxe/ui/styles/Unit.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Value
#include <haxe/ui/styles/Value.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_489322c2e63b6ea0_53_new,"haxe.ui.styles.Parser","new",0x38ed84eb,"haxe.ui.styles.Parser.new","haxe/ui/styles/Parser.hx",53,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_64_notImplemented,"haxe.ui.styles.Parser","notImplemented",0xbf258bc4,"haxe.ui.styles.Parser.notImplemented","haxe/ui/styles/Parser.hx",64,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_68_applyStyle,"haxe.ui.styles.Parser","applyStyle",0xb297e3b8,"haxe.ui.styles.Parser.applyStyle","haxe/ui/styles/Parser.hx",68,0xf482af64)
static const ::String _hx_array_data_ef203379_8[] = {
	HX_("background-color",84,e8,6d,de),HX_("background-color-end",52,18,72,2e),HX_("background-gradient-style",93,4c,5d,f2),
};
static const ::String _hx_array_data_ef203379_9[] = {
	HX_("background-image-clip-top",89,46,05,ca),HX_("background-image-clip-left",93,1d,47,f5),HX_("background-image-clip-bottom",77,77,29,f7),HX_("background-image-clip-right",d0,d0,ff,1f),
};
static const ::String _hx_array_data_ef203379_10[] = {
	HX_("background-image-slice-top",89,71,91,06),HX_("background-image-slice-left",93,92,60,b3),HX_("background-image-slice-bottom",77,2c,4a,86),HX_("background-image-slice-right",d0,bb,2c,b8),
};
static const ::String _hx_array_data_ef203379_11[] = {
	HX_("border-width",a5,b8,16,f1),HX_("border-style",d0,a7,d1,aa),HX_("border-color",02,74,10,71),
};
static const ::String _hx_array_data_ef203379_12[] = {
	HX_("border-bottom-width",25,7b,d4,cf),HX_("border-bottom-color",82,36,ce,4f),
};
static const ::String _hx_array_data_ef203379_13[] = {
	HX_("border-left-width",01,57,31,19),HX_("border-left-color",5e,12,2b,99),
};
static const ::String _hx_array_data_ef203379_14[] = {
	HX_("border-right-width",74,8f,d8,21),HX_("border-right-color",d1,4a,d2,a1),
};
static const ::String _hx_array_data_ef203379_15[] = {
	HX_("border-top-width",2d,35,ac,46),HX_("border-top-color",8a,f0,a5,c6),
};
static const ::String _hx_array_data_ef203379_16[] = {
	HX_("font-name",c9,c0,b5,4a),HX_("font-size",3f,ef,09,4e),HX_("font-style",f3,04,ec,01),
};
static const ::String _hx_array_data_ef203379_17[] = {
	HX_("offset-left",41,36,0b,36),HX_("offset-top",9b,5d,55,2f),
};
static const ::String _hx_array_data_ef203379_18[] = {
	HX_("vertical-spacing",6c,65,11,2b),HX_("horizontal-spacing",da,c3,ba,32),
};
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_789_applyComposite,"haxe.ui.styles.Parser","applyComposite",0x992e9e0e,"haxe.ui.styles.Parser.applyComposite","haxe/ui/styles/Parser.hx",789,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_827_getGroup,"haxe.ui.styles.Parser","getGroup",0xc720b65e,"haxe.ui.styles.Parser.getGroup","haxe/ui/styles/Parser.hx",827,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_843_getList,"haxe.ui.styles.Parser","getList",0x3c6c221f,"haxe.ui.styles.Parser.getList","haxe/ui/styles/Parser.hx",843,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_859_getInt,"haxe.ui.styles.Parser","getInt",0x666eba4e,"haxe.ui.styles.Parser.getInt","haxe/ui/styles/Parser.hx",859,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_877_getBool,"haxe.ui.styles.Parser","getBool",0x35d489eb,"haxe.ui.styles.Parser.getBool","haxe/ui/styles/Parser.hx",877,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_888_getString,"haxe.ui.styles.Parser","getString",0x6a86e0d2,"haxe.ui.styles.Parser.getString","haxe/ui/styles/Parser.hx",888,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_897_getCall,"haxe.ui.styles.Parser","getCall",0x36731e5f,"haxe.ui.styles.Parser.getCall","haxe/ui/styles/Parser.hx",897,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_930_getVal,"haxe.ui.styles.Parser","getVal",0x66788c40,"haxe.ui.styles.Parser.getVal","haxe/ui/styles/Parser.hx",930,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_947_getUnit,"haxe.ui.styles.Parser","getUnit",0x4262d045,"haxe.ui.styles.Parser.getUnit","haxe/ui/styles/Parser.hx",947,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_968_getVariant,"haxe.ui.styles.Parser","getVariant",0xaf6c8964,"haxe.ui.styles.Parser.getVariant","haxe/ui/styles/Parser.hx",968,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_988_mapIdent,"haxe.ui.styles.Parser","mapIdent",0xfc10a649,"haxe.ui.styles.Parser.mapIdent","haxe/ui/styles/Parser.hx",988,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_998_getIdent,"haxe.ui.styles.Parser","getIdent",0xe4a5460f,"haxe.ui.styles.Parser.getIdent","haxe/ui/styles/Parser.hx",998,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1004_getColAlpha,"haxe.ui.styles.Parser","getColAlpha",0x7015293f,"haxe.ui.styles.Parser.getColAlpha","haxe/ui/styles/Parser.hx",1004,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1011_getFill,"haxe.ui.styles.Parser","getFill",0x3874d444,"haxe.ui.styles.Parser.getFill","haxe/ui/styles/Parser.hx",1011,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1031_getCol,"haxe.ui.styles.Parser","getCol",0x666a2d9f,"haxe.ui.styles.Parser.getCol","haxe/ui/styles/Parser.hx",1031,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1080_getFontName,"haxe.ui.styles.Parser","getFontName",0x31f309fb,"haxe.ui.styles.Parser.getFontName","haxe/ui/styles/Parser.hx",1080,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1110_unexpected,"haxe.ui.styles.Parser","unexpected",0x491cd8a6,"haxe.ui.styles.Parser.unexpected","haxe/ui/styles/Parser.hx",1110,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1113_expect,"haxe.ui.styles.Parser","expect",0x87c5622e,"haxe.ui.styles.Parser.expect","haxe/ui/styles/Parser.hx",1113,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1119_push,"haxe.ui.styles.Parser","push",0x984556ef,"haxe.ui.styles.Parser.push","haxe/ui/styles/Parser.hx",1119,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1122_isToken,"haxe.ui.styles.Parser","isToken",0xd2e77cba,"haxe.ui.styles.Parser.isToken","haxe/ui/styles/Parser.hx",1122,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1129_parse,"haxe.ui.styles.Parser","parse",0x972dbd7e,"haxe.ui.styles.Parser.parse","haxe/ui/styles/Parser.hx",1129,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1138_valueStr,"haxe.ui.styles.Parser","valueStr",0xbba65155,"haxe.ui.styles.Parser.valueStr","haxe/ui/styles/Parser.hx",1138,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1156_parseStyle,"haxe.ui.styles.Parser","parseStyle",0x3127aed3,"haxe.ui.styles.Parser.parseStyle","haxe/ui/styles/Parser.hx",1156,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1189_parseRules,"haxe.ui.styles.Parser","parseRules",0x9e606d99,"haxe.ui.styles.Parser.parseRules","haxe/ui/styles/Parser.hx",1189,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1211_parseClasses,"haxe.ui.styles.Parser","parseClasses",0xf46a84c8,"haxe.ui.styles.Parser.parseClasses","haxe/ui/styles/Parser.hx",1211,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1222_readClasses,"haxe.ui.styles.Parser","readClasses",0xfcfe997b,"haxe.ui.styles.Parser.readClasses","haxe/ui/styles/Parser.hx",1222,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1240_updateClass,"haxe.ui.styles.Parser","updateClass",0x6e7298fa,"haxe.ui.styles.Parser.updateClass","haxe/ui/styles/Parser.hx",1240,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1252_readClass,"haxe.ui.styles.Parser","readClass",0xf63ff3cd,"haxe.ui.styles.Parser.readClass","haxe/ui/styles/Parser.hx",1252,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1294_readIdent,"haxe.ui.styles.Parser","readIdent",0x6560be85,"haxe.ui.styles.Parser.readIdent","haxe/ui/styles/Parser.hx",1294,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1302_readValue,"haxe.ui.styles.Parser","readValue",0xdf9ffb06,"haxe.ui.styles.Parser.readValue","haxe/ui/styles/Parser.hx",1302,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1326_readHex,"haxe.ui.styles.Parser","readHex",0x24ff3f30,"haxe.ui.styles.Parser.readHex","haxe/ui/styles/Parser.hx",1326,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1338_readValueUnit,"haxe.ui.styles.Parser","readValueUnit",0xdba3ecaa,"haxe.ui.styles.Parser.readValueUnit","haxe/ui/styles/Parser.hx",1338,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1354_readValueNext,"haxe.ui.styles.Parser","readValueNext",0xd6fca719,"haxe.ui.styles.Parser.readValueNext","haxe/ui/styles/Parser.hx",1354,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1396_loopNext,"haxe.ui.styles.Parser","loopNext",0x08c54d0c,"haxe.ui.styles.Parser.loopNext","haxe/ui/styles/Parser.hx",1396,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1411_loopComma,"haxe.ui.styles.Parser","loopComma",0x55097f9c,"haxe.ui.styles.Parser.loopComma","haxe/ui/styles/Parser.hx",1411,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1425_isSpace,"haxe.ui.styles.Parser","isSpace",0x40228687,"haxe.ui.styles.Parser.isSpace","haxe/ui/styles/Parser.hx",1425,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1429_isIdentChar,"haxe.ui.styles.Parser","isIdentChar",0x56087427,"haxe.ui.styles.Parser.isIdentChar","haxe/ui/styles/Parser.hx",1429,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1433_isNum,"haxe.ui.styles.Parser","isNum",0x9b2a35c7,"haxe.ui.styles.Parser.isNum","haxe/ui/styles/Parser.hx",1433,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1437_next,"haxe.ui.styles.Parser","next",0x96e6ca08,"haxe.ui.styles.Parser.next","haxe/ui/styles/Parser.hx",1437,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1440_readUrl,"haxe.ui.styles.Parser","readUrl",0x250927c4,"haxe.ui.styles.Parser.readUrl","haxe/ui/styles/Parser.hx",1440,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_1478_readToken,"haxe.ui.styles.Parser","readToken",0xc212fe8e,"haxe.ui.styles.Parser.readToken","haxe/ui/styles/Parser.hx",1478,0xf482af64)
namespace haxe{
namespace ui{
namespace styles{

void Parser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_53_new)
            	}

Dynamic Parser_obj::__CreateEmpty() { return new Parser_obj; }

void *Parser_obj::_hx_vtable = 0;

Dynamic Parser_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Parser_obj > _hx_result = new Parser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Parser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2448cadb;
}

void Parser_obj::notImplemented(){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_64_notImplemented)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,notImplemented,(void))

bool Parser_obj::applyStyle(::String r, ::haxe::ui::styles::Value v, ::haxe::ui::styles::Style s){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_68_applyStyle)
HXLINE(  69)		::String _hx_switch_0 = r;
            		if (  (_hx_switch_0==HX_("background",ee,93,1d,26)) ){
HXLINE( 222)			if (this->applyComposite(::Array_obj< ::String >::fromData( _hx_array_data_ef203379_8,3),v,s)) {
HXLINE( 223)				return true;
            			}
HXLINE( 224)			if ((this->getIdent(v) == HX_("none",b8,12,0a,49))) {
HXLINE( 229)				s->backgroundColor = (int)-2147483648;
HXLINE( 230)				s->backgroundColorEnd = (int)-2147483648;
HXLINE( 231)				return true;
            			}
HXLINE( 221)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("background-color",84,e8,6d,de)) ){
HXLINE( 189)			bool _hx_tmp;
HXDLIN( 189)			if ((this->getIdent(v) != HX_("none",b8,12,0a,49))) {
HXLINE( 189)				_hx_tmp = (this->getIdent(v) == HX_("transparent",52,2b,ba,22));
            			}
            			else {
HXLINE( 189)				_hx_tmp = true;
            			}
HXDLIN( 189)			if (_hx_tmp) {
HXLINE( 190)				s->backgroundColor = (int)-2147483648;
HXLINE( 191)				s->backgroundColorEnd = (int)-2147483648;
HXLINE( 196)				return true;
            			}
HXLINE( 198)			 ::Dynamic f = this->getCol(v);
HXLINE( 200)			if (hx::IsNotNull( f )) {
HXLINE( 201)				s->backgroundColor = f;
HXLINE( 202)				s->backgroundColorEnd = null();
HXLINE( 203)				return true;
            			}
HXLINE( 188)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("background-color-end",52,18,72,2e)) ){
HXLINE( 206)			 ::Dynamic f1 = this->getCol(v);
HXLINE( 208)			if (hx::IsNotNull( f1 )) {
HXLINE( 209)				s->backgroundColorEnd = f1;
HXLINE( 210)				return true;
            			}
HXLINE( 205)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("background-gradient-style",93,4c,5d,f2)) ){
HXLINE( 213)			::String v1 = this->getIdent(v);
HXLINE( 214)			if (hx::IsNotNull( v1 )) {
HXLINE( 215)				bool _hx_tmp1;
HXDLIN( 215)				if ((v1 != HX_("vertical",76,bc,15,6a))) {
HXLINE( 215)					_hx_tmp1 = (v1 == HX_("horizontal",e4,fc,c3,15));
            				}
            				else {
HXLINE( 215)					_hx_tmp1 = true;
            				}
HXDLIN( 215)				if (_hx_tmp1) {
HXLINE( 216)					s->backgroundGradientStyle = v1;
HXLINE( 217)					return true;
            				}
HXLINE( 219)				return true;
            			}
HXLINE( 212)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("background-image",7c,96,7a,51)) ){
HXLINE( 236)			::String x = this->getString(v);
HXLINE( 237)			if (hx::IsNotNull( x )) {
HXLINE( 238)				s->backgroundImage = x;
HXLINE( 239)				return true;
            			}
HXLINE( 235)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("background-image-clip",81,f1,70,5b)) ){
HXLINE( 270)			if (this->applyComposite(::Array_obj< ::String >::fromData( _hx_array_data_ef203379_9,4),v,s)) {
HXLINE( 274)				return true;
            			}
HXLINE( 275)			if ((this->getIdent(v) == HX_("none",b8,12,0a,49))) {
HXLINE( 276)				s->backgroundImageClipTop = null();
HXLINE( 277)				s->backgroundImageClipLeft = null();
HXLINE( 278)				s->backgroundImageClipBottom = null();
HXLINE( 279)				s->backgroundImageClipRight = null();
HXLINE( 280)				return true;
            			}
HXLINE( 269)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("background-image-clip-bottom",77,77,29,f7)) ){
HXLINE( 264)			 ::haxe::ui::util::VariantType i = this->getVariant(v,null(),null());
HXLINE( 265)			if (hx::IsNotNull( i )) {
HXLINE( 265)				s->backgroundImageClipBottom = i;
HXDLIN( 265)				return true;
            			}
HXLINE( 263)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("background-image-clip-left",93,1d,47,f5)) ){
HXLINE( 261)			 ::haxe::ui::util::VariantType i1 = this->getVariant(v,null(),null());
HXLINE( 262)			if (hx::IsNotNull( i1 )) {
HXLINE( 262)				s->backgroundImageClipLeft = i1;
HXDLIN( 262)				return true;
            			}
HXLINE( 260)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("background-image-clip-right",d0,d0,ff,1f)) ){
HXLINE( 267)			 ::haxe::ui::util::VariantType i2 = this->getVariant(v,null(),null());
HXLINE( 268)			if (hx::IsNotNull( i2 )) {
HXLINE( 268)				s->backgroundImageClipRight = i2;
HXDLIN( 268)				return true;
            			}
HXLINE( 266)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("background-image-clip-top",89,46,05,ca)) ){
HXLINE( 258)			 ::haxe::ui::util::VariantType i3 = this->getVariant(v,null(),null());
HXLINE( 259)			if (hx::IsNotNull( i3 )) {
HXLINE( 259)				s->backgroundImageClipTop = i3;
HXDLIN( 259)				return true;
            			}
HXLINE( 257)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("background-image-repeat",4c,e8,d5,ca)) ){
HXLINE( 244)			::String v2 = this->getIdent(v);
HXLINE( 245)			if (hx::IsNotNull( v2 )) {
HXLINE( 246)				bool _hx_tmp2;
HXDLIN( 246)				bool _hx_tmp3;
HXDLIN( 246)				if ((v2 != HX_("repeat",5b,97,7c,06))) {
HXLINE( 246)					_hx_tmp3 = (v2 == HX_("stretch",05,3e,53,f6));
            				}
            				else {
HXLINE( 246)					_hx_tmp3 = true;
            				}
HXDLIN( 246)				if (!(_hx_tmp3)) {
HXLINE( 246)					_hx_tmp2 = (v2 == HX_("none",b8,12,0a,49));
            				}
            				else {
HXLINE( 246)					_hx_tmp2 = true;
            				}
HXDLIN( 246)				if (_hx_tmp2) {
HXLINE( 247)					if ((v2 == HX_("none",b8,12,0a,49))) {
HXLINE( 248)						s->backgroundImageRepeat = null();
            					}
            					else {
HXLINE( 250)						s->backgroundImageRepeat = v2;
            					}
HXLINE( 252)					return true;
            				}
            			}
HXLINE( 243)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("background-image-slice",81,9c,cb,dd)) ){
HXLINE( 297)			if (this->applyComposite(::Array_obj< ::String >::fromData( _hx_array_data_ef203379_10,4),v,s)) {
HXLINE( 301)				return true;
            			}
HXLINE( 302)			if ((this->getIdent(v) == HX_("none",b8,12,0a,49))) {
HXLINE( 303)				s->backgroundImageSliceTop = null();
HXLINE( 304)				s->backgroundImageSliceLeft = null();
HXLINE( 305)				s->backgroundImageSliceBottom = null();
HXLINE( 306)				s->backgroundImageSliceRight = null();
HXLINE( 307)				return true;
            			}
HXLINE( 296)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("background-image-slice-bottom",77,2c,4a,86)) ){
HXLINE( 291)			 ::haxe::ui::util::VariantType i4 = this->getVariant(v,null(),null());
HXLINE( 292)			if (hx::IsNotNull( i4 )) {
HXLINE( 292)				s->backgroundImageSliceBottom = i4;
HXDLIN( 292)				return true;
            			}
HXLINE( 290)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("background-image-slice-left",93,92,60,b3)) ){
HXLINE( 288)			 ::haxe::ui::util::VariantType i5 = this->getVariant(v,null(),null());
HXLINE( 289)			if (hx::IsNotNull( i5 )) {
HXLINE( 289)				s->backgroundImageSliceLeft = i5;
HXDLIN( 289)				return true;
            			}
HXLINE( 287)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("background-image-slice-right",d0,bb,2c,b8)) ){
HXLINE( 294)			 ::haxe::ui::util::VariantType i6 = this->getVariant(v,null(),null());
HXLINE( 295)			if (hx::IsNotNull( i6 )) {
HXLINE( 295)				s->backgroundImageSliceRight = i6;
HXDLIN( 295)				return true;
            			}
HXLINE( 293)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("background-image-slice-top",89,71,91,06)) ){
HXLINE( 285)			 ::haxe::ui::util::VariantType i7 = this->getVariant(v,null(),null());
HXLINE( 286)			if (hx::IsNotNull( i7 )) {
HXLINE( 286)				s->backgroundImageSliceTop = i7;
HXDLIN( 286)				return true;
            			}
HXLINE( 284)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("background-opacity",2c,9f,1b,c0)) ){
HXLINE( 608)			 ::Dynamic i8 = this->getVal(v);
HXLINE( 609)			if (hx::IsNotNull( i8 )) {
HXLINE( 610)				s->backgroundOpacity = i8;
HXLINE( 611)				return true;
            			}
HXLINE( 607)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("border",ec,4c,1a,64)) ){
HXLINE( 352)			if (this->applyComposite(::Array_obj< ::String >::fromData( _hx_array_data_ef203379_11,3),v,s)) {
HXLINE( 353)				return true;
            			}
HXLINE( 354)			if ((this->getIdent(v) == HX_("none",b8,12,0a,49))) {
HXLINE( 359)				s->borderTopSize = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt((int)-2147483648);
HXLINE( 360)				s->borderLeftSize = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt((int)-2147483648);
HXLINE( 361)				s->borderBottomSize = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt((int)-2147483648);
HXLINE( 362)				s->borderRightSize = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt((int)-2147483648);
HXLINE( 363)				s->borderTopColor = (int)-2147483648;
HXLINE( 364)				s->borderLeftColor = (int)-2147483648;
HXLINE( 365)				s->borderBottomColor = (int)-2147483648;
HXLINE( 366)				s->borderRightColor = (int)-2147483648;
HXLINE( 367)				return true;
            			}
HXLINE( 351)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("border-bottom",6c,2f,47,1c)) ){
HXLINE( 386)			if (this->applyComposite(::Array_obj< ::String >::fromData( _hx_array_data_ef203379_12,2),v,s)) {
HXLINE( 387)				return true;
            			}
HXLINE( 388)			if ((this->getIdent(v) == HX_("none",b8,12,0a,49))) {
HXLINE( 389)				s->borderBottomSize = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt((int)-2147483648);
HXLINE( 390)				s->borderBottomColor = (int)-2147483648;
HXLINE( 391)				return true;
            			}
HXLINE( 385)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("border-bottom-color",82,36,ce,4f)) ){
HXLINE( 463)			 ::Dynamic c = this->getCol(v);
HXLINE( 465)			if (hx::IsNotNull( c )) {
HXLINE( 466)				s->borderBottomColor = c;
HXLINE( 467)				return true;
            			}
HXLINE( 462)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("border-bottom-size",82,24,35,2c)) ||  (_hx_switch_0==HX_("border-bottom-width",25,7b,d4,cf)) ){
HXLINE( 424)			 ::haxe::ui::util::VariantType i9 = this->getVariant(v,true,false);
HXLINE( 425)			if (hx::IsNotNull( i9 )) {
HXLINE( 426)				s->borderBottomSize = i9;
HXLINE( 427)				return true;
            			}
HXLINE( 423)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("border-color",02,74,10,71)) ){
HXLINE( 439)			 ::Dynamic c1 = this->getCol(v);
HXLINE( 441)			if (hx::IsNotNull( c1 )) {
HXLINE( 442)				s->borderTopColor = c1;
HXLINE( 443)				s->borderLeftColor = c1;
HXLINE( 444)				s->borderBottomColor = c1;
HXLINE( 445)				s->borderRightColor = c1;
HXLINE( 446)				return true;
            			}
HXLINE( 438)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("border-left",48,7e,03,2a)) ){
HXLINE( 378)			if (this->applyComposite(::Array_obj< ::String >::fromData( _hx_array_data_ef203379_13,2),v,s)) {
HXLINE( 379)				return true;
            			}
HXLINE( 380)			if ((this->getIdent(v) == HX_("none",b8,12,0a,49))) {
HXLINE( 381)				s->borderLeftSize = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt((int)-2147483648);
HXLINE( 382)				s->borderLeftColor = (int)-2147483648;
HXLINE( 383)				return true;
            			}
HXLINE( 377)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("border-left-color",5e,12,2b,99)) ){
HXLINE( 456)			 ::Dynamic c2 = this->getCol(v);
HXLINE( 458)			if (hx::IsNotNull( c2 )) {
HXLINE( 459)				s->borderLeftColor = c2;
HXLINE( 460)				return true;
            			}
HXLINE( 455)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("border-left-size",26,78,a1,a1)) ||  (_hx_switch_0==HX_("border-left-width",01,57,31,19)) ){
HXLINE( 418)			 ::haxe::ui::util::VariantType i10 = this->getVariant(v,true,false);
HXLINE( 419)			if (hx::IsNotNull( i10 )) {
HXLINE( 420)				s->borderLeftSize = i10;
HXLINE( 421)				return true;
            			}
HXLINE( 417)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("border-radius",d3,18,c5,67)) ){
HXLINE( 342)			if ((this->getIdent(v) == HX_("none",b8,12,0a,49))) {
HXLINE( 343)				s->borderRadius = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt((int)-2147483648);
HXLINE( 344)				return true;
            			}
HXLINE( 346)			 ::haxe::ui::util::VariantType i11 = this->getVariant(v,true,false);
HXLINE( 347)			if (hx::IsNotNull( i11 )) {
HXLINE( 348)				s->borderRadius = i11;
HXLINE( 349)				return true;
            			}
HXLINE( 341)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("border-right",7b,0e,18,10)) ){
HXLINE( 394)			if (this->applyComposite(::Array_obj< ::String >::fromData( _hx_array_data_ef203379_14,2),v,s)) {
HXLINE( 395)				return true;
            			}
HXLINE( 396)			if ((this->getIdent(v) == HX_("none",b8,12,0a,49))) {
HXLINE( 397)				s->borderRightSize = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt((int)-2147483648);
HXLINE( 398)				s->borderRightColor = (int)-2147483648;
HXLINE( 399)				return true;
            			}
HXLINE( 393)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("border-right-color",d1,4a,d2,a1)) ){
HXLINE( 470)			 ::Dynamic c3 = this->getCol(v);
HXLINE( 472)			if (hx::IsNotNull( c3 )) {
HXLINE( 473)				s->borderRightColor = c3;
HXLINE( 474)				return true;
            			}
HXLINE( 469)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("border-right-size",13,4f,36,fb)) ||  (_hx_switch_0==HX_("border-right-width",74,8f,d8,21)) ){
HXLINE( 430)			 ::haxe::ui::util::VariantType i12 = this->getVariant(v,true,false);
HXLINE( 431)			if (hx::IsNotNull( i12 )) {
HXLINE( 432)				s->borderRightSize = i12;
HXLINE( 433)				return true;
            			}
HXLINE( 429)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("border-size",02,17,a7,2e)) ||  (_hx_switch_0==HX_("border-width",a5,b8,16,f1)) ){
HXLINE( 402)			 ::haxe::ui::util::VariantType i13 = this->getVariant(v,true,false);
HXLINE( 403)			if (hx::IsNotNull( i13 )) {
HXLINE( 405)				s->borderTopSize = i13;
HXLINE( 406)				s->borderLeftSize = i13;
HXLINE( 407)				s->borderBottomSize = i13;
HXLINE( 408)				s->borderRightSize = i13;
HXLINE( 409)				return true;
            			}
HXLINE( 401)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("border-style",d0,a7,d1,aa)) ){
HXLINE( 436)			if ((this->getIdent(v) == HX_("solid",2b,b4,c5,80))) {
HXLINE( 437)				return true;
            			}
HXLINE( 436)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("border-top",74,33,d8,ed)) ){
HXLINE( 370)			if (this->applyComposite(::Array_obj< ::String >::fromData( _hx_array_data_ef203379_15,2),v,s)) {
HXLINE( 371)				return true;
            			}
HXLINE( 372)			if ((this->getIdent(v) == HX_("none",b8,12,0a,49))) {
HXLINE( 373)				s->borderTopSize = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt((int)-2147483648);
HXLINE( 374)				s->borderTopColor = (int)-2147483648;
HXLINE( 375)				return true;
            			}
HXLINE( 369)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("border-top-color",8a,f0,a5,c6)) ){
HXLINE( 449)			 ::Dynamic c4 = this->getCol(v);
HXLINE( 451)			if (hx::IsNotNull( c4 )) {
HXLINE( 452)				s->borderTopColor = c4;
HXLINE( 453)				return true;
            			}
HXLINE( 448)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("border-top-size",7a,83,50,ad)) ||  (_hx_switch_0==HX_("border-top-width",2d,35,ac,46)) ){
HXLINE( 412)			 ::haxe::ui::util::VariantType i14 = this->getVariant(v,true,false);
HXLINE( 413)			if (hx::IsNotNull( i14 )) {
HXLINE( 414)				s->borderTopSize = i14;
HXLINE( 415)				return true;
            			}
HXLINE( 411)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("clip",d0,6e,c2,41)) ){
HXLINE( 566)			 ::Dynamic b = this->getBool(v);
HXLINE( 567)			if (hx::IsNotNull( b )) {
HXLINE( 568)				s->clip = b;
HXLINE( 569)				return true;
            			}
HXLINE( 565)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("color",63,71,5c,4a)) ){
HXLINE( 332)			if ((this->getIdent(v) == HX_("none",b8,12,0a,49))) {
HXLINE( 333)				s->color = (int)-2147483648;
HXLINE( 334)				return true;
            			}
HXLINE( 336)			 ::Dynamic c5 = this->getCol(v);
HXLINE( 337)			if (hx::IsNotNull( c5 )) {
HXLINE( 338)				s->color = c5;
HXLINE( 339)				return true;
            			}
HXLINE( 331)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("cursor",d6,8e,e8,3e)) ){
HXLINE( 508)			::String v3 = this->getIdent(v);
HXLINE( 509)			if (hx::IsNotNull( v3 )) {
HXLINE( 510)				s->cursor = v3;
HXLINE( 511)				return true;
            			}
HXLINE( 513)			return false;
HXLINE( 507)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("filter",b8,1f,35,85)) ){
HXLINE( 515)			::cpp::VirtualArray arr = this->getCall(v);
HXLINE( 516)			if (hx::IsNotNull( arr )) {
HXLINE( 517)				s->filter = arr;
HXLINE( 518)				return true;
            			}
            			else {
HXLINE( 520)				::String i15 = this->getIdent(v);
HXLINE( 521)				if (hx::IsNotNull( i15 )) {
HXLINE( 522)					s->filter = ::cpp::VirtualArray_obj::__new(1)->init(0,i15);
HXLINE( 523)					return true;
            				}
            			}
HXLINE( 526)			return false;
HXLINE( 514)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("font",cf,5d,c0,43)) ){
HXLINE( 631)			return this->applyComposite(::Array_obj< ::String >::fromData( _hx_array_data_ef203379_16,3),v,s);
HXDLIN( 631)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("font-name",c9,c0,b5,4a)) ){
HXLINE( 633)			::String x1 = this->getString(v);
HXLINE( 634)			if (hx::IsNotNull( x1 )) {
HXLINE( 635)				s->fontName = x1;
HXLINE( 636)				return true;
            			}
HXLINE( 632)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("font-size",3f,ef,09,4e)) ){
HXLINE( 639)			 ::haxe::ui::util::VariantType i16 = this->getVariant(v,true,false);
HXLINE( 640)			if (hx::IsNotNull( i16 )) {
HXLINE( 641)				s->fontSize = i16;
HXLINE( 642)				return true;
            			}
HXLINE( 638)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("font-style",f3,04,ec,01)) ){
HXLINE( 645)			::String x2 = this->getIdent(v);
HXLINE( 646)			if ((x2 == HX_("bold",85,81,1b,41))) {
HXLINE( 647)				s->fontBold = true;
            			}
HXLINE( 649)			return true;
HXLINE( 644)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("height",e7,07,4c,02)) ){
HXLINE( 145)			 ::Dynamic i17 = this->getVal(v);
HXLINE( 146)			if ((this->getIdent(v) == HX_("auto",6f,df,76,40))) {
HXLINE( 147)				s->height = null();
HXLINE( 148)				s->percentHeight = null();
HXLINE( 149)				s->autoHeight = true;
HXLINE( 150)				return true;
            			}
            			else {
HXLINE( 151)				if (hx::IsNotNull( i17 )) {
HXLINE( 152)					s->height = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(i17);
HXLINE( 153)					return true;
            				}
            				else {
HXLINE( 155)					 ::haxe::ui::styles::Unit p = this->getUnit(v);
HXLINE( 156)					if (hx::IsNotNull( p )) {
HXLINE( 157)						switch((int)(_hx_getEnumValueIndex(p))){
            							case (int)1: {
HXLINE( 158)								Float x3 = p->_hx_getFloat(0);
HXLINE( 159)								s->percentHeight = (x3 * (int)100);
HXLINE( 160)								return true;
            							}
            							break;
            							case (int)3: case (int)4: case (int)5: {
HXLINE( 162)								s->height = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromUnit(p);
HXLINE( 163)								return true;
            							}
            							break;
            							default:{
            							}
            						}
            					}
            				}
            			}
HXLINE( 144)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("hidden",6a,ff,95,4c)) ){
HXLINE( 560)			 ::Dynamic b1 = this->getBool(v);
HXLINE( 561)			if (hx::IsNotNull( b1 )) {
HXLINE( 562)				s->hidden = b1;
HXLINE( 563)				return true;
            			}
HXLINE( 559)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("horizontal-align",5c,53,a7,93)) ){
HXLINE( 578)			::String x4 = this->getIdent(v);
HXLINE( 579)			::String _hx_switch_1 = x4;
            			if (  (_hx_switch_1==HX_("center",d5,25,db,05)) ||  (_hx_switch_1==HX_("left",07,08,b0,47)) ||  (_hx_switch_1==HX_("right",dc,0b,64,e9)) ){
HXLINE( 581)				s->horizontalAlign = x4;
HXLINE( 582)				return true;
HXLINE( 580)				goto _hx_goto_3;
            			}
            			/* default */{
            			}
            			_hx_goto_3:;
HXLINE( 577)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("horizontal-spacing",da,c3,ba,32)) ){
HXLINE( 530)			 ::haxe::ui::util::VariantType i18 = this->getVariant(v,null(),null());
HXLINE( 531)			if (hx::IsNotNull( i18 )) {
HXLINE( 532)				s->horizontalSpacing = i18;
HXLINE( 533)				return true;
            			}
HXLINE( 529)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("icon",79,e7,b2,45)) ){
HXLINE( 550)			::String x5 = this->getString(v);
HXLINE( 551)			if ((this->getIdent(v) == HX_("none",b8,12,0a,49))) {
HXLINE( 552)				s->icon = null();
HXLINE( 553)				return true;
            			}
HXLINE( 555)			if (hx::IsNotNull( x5 )) {
HXLINE( 556)				s->icon = x5;
HXLINE( 557)				return true;
            			}
HXLINE( 549)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("icon-position",3d,f7,d4,68)) ){
HXLINE( 542)			::String x6 = this->getIdent(v);
HXLINE( 543)			::String _hx_switch_2 = x6;
            			if (  (_hx_switch_2==HX_("bottom",eb,e6,78,65)) ||  (_hx_switch_2==HX_("far-left",7d,bc,22,51)) ||  (_hx_switch_2==HX_("far-right",a6,3e,4f,24)) ||  (_hx_switch_2==HX_("left",07,08,b0,47)) ||  (_hx_switch_2==HX_("right",dc,0b,64,e9)) ||  (_hx_switch_2==HX_("top",95,66,58,00)) ){
HXLINE( 545)				s->iconPosition = x6;
HXLINE( 546)				return true;
HXLINE( 544)				goto _hx_goto_4;
            			}
            			/* default */{
            			}
            			_hx_goto_4:;
HXLINE( 541)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("margin",2e,70,6d,ba)) ){
HXLINE(  96)			if ((_hx_getEnumValueIndex(v) == (int)7)) {
HXLINE(  96)				if ((v->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >()->length == (int)2)) {
HXLINE(  97)					 ::haxe::ui::styles::Value b2 = v->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >()->__get((int)1).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN(  97)					 ::haxe::ui::styles::Value a = v->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >()->__get((int)0).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN(  97)					{
HXLINE(  98)						 ::haxe::ui::util::VariantType a1 = this->getVariant(a,null(),null());
HXDLIN(  98)						 ::haxe::ui::util::VariantType b3 = this->getVariant(b2,null(),null());
HXLINE(  99)						bool _hx_tmp4;
HXDLIN(  99)						if (hx::IsNotNull( a1 )) {
HXLINE(  99)							_hx_tmp4 = hx::IsNotNull( b3 );
            						}
            						else {
HXLINE(  99)							_hx_tmp4 = false;
            						}
HXDLIN(  99)						if (_hx_tmp4) {
HXLINE( 100)							s->marginTop = (s->marginBottom = a1);
HXLINE( 101)							s->marginLeft = (s->marginRight = b3);
HXLINE( 102)							return true;
            						}
            					}
            				}
            				else {
HXLINE( 105)					 ::haxe::ui::util::VariantType i19 = this->getVariant(v,null(),null());
HXLINE( 106)					if (hx::IsNotNull( i19 )) {
HXLINE( 106)						s->margin(i19);
HXDLIN( 106)						return true;
            					}
            				}
            			}
            			else {
HXLINE( 105)				 ::haxe::ui::util::VariantType i20 = this->getVariant(v,null(),null());
HXLINE( 106)				if (hx::IsNotNull( i20 )) {
HXLINE( 106)					s->margin(i20);
HXDLIN( 106)					return true;
            				}
            			}
HXLINE(  96)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("margin-bottom",6a,d8,ef,2a)) ){
HXLINE( 118)			 ::haxe::ui::util::VariantType i21 = this->getVariant(v,null(),null());
HXLINE( 119)			if (hx::IsNotNull( i21 )) {
HXLINE( 119)				s->marginBottom = i21;
HXDLIN( 119)				return true;
            			}
HXLINE( 117)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("margin-left",c6,4b,ff,e7)) ){
HXLINE( 112)			 ::haxe::ui::util::VariantType i22 = this->getVariant(v,null(),null());
HXLINE( 113)			if (hx::IsNotNull( i22 )) {
HXLINE( 113)				s->marginLeft = i22;
HXDLIN( 113)				return true;
            			}
HXLINE( 111)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("margin-right",3d,0f,70,8e)) ){
HXLINE( 115)			 ::haxe::ui::util::VariantType i23 = this->getVariant(v,null(),null());
HXLINE( 116)			if (hx::IsNotNull( i23 )) {
HXLINE( 116)				s->marginRight = i23;
HXDLIN( 116)				return true;
            			}
HXLINE( 114)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("margin-top",b6,1f,6b,70)) ){
HXLINE( 109)			 ::haxe::ui::util::VariantType i24 = this->getVariant(v,null(),null());
HXLINE( 110)			if (hx::IsNotNull( i24 )) {
HXLINE( 110)				s->marginTop = i24;
HXDLIN( 110)				return true;
            			}
HXLINE( 108)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("native",97,c9,1c,22)) ){
HXLINE( 572)			 ::Dynamic b4 = this->getBool(v);
HXLINE( 573)			if (hx::IsNotNull( b4 )) {
HXLINE( 574)				s->native = b4;
HXLINE( 575)				return true;
            			}
HXLINE( 571)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("offset",93,97,3f,60)) ){
HXLINE( 615)			return this->applyComposite(::Array_obj< ::String >::fromData( _hx_array_data_ef203379_17,2),v,s);
HXDLIN( 615)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("offset-left",41,36,0b,36)) ){
HXLINE( 617)			 ::haxe::ui::util::VariantType i25 = this->getVariant(v,null(),null());
HXLINE( 618)			if (hx::IsNotNull( i25 )) {
HXLINE( 619)				s->offsetLeft = i25;
HXLINE( 620)				return true;
            			}
HXLINE( 616)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("offset-top",9b,5d,55,2f)) ){
HXLINE( 623)			 ::haxe::ui::util::VariantType i26 = this->getVariant(v,null(),null());
HXLINE( 624)			if (hx::IsNotNull( i26 )) {
HXLINE( 625)				s->offsetTop = i26;
HXLINE( 626)				return true;
            			}
HXLINE( 622)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("opacity",cb,5d,65,eb)) ){
HXLINE( 602)			 ::Dynamic i27 = this->getVal(v);
HXLINE( 603)			if (hx::IsNotNull( i27 )) {
HXLINE( 604)				s->opacity = i27;
HXLINE( 605)				return true;
            			}
HXLINE( 601)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("padding",d1,59,7d,d0)) ){
HXLINE(  71)			if ((_hx_getEnumValueIndex(v) == (int)7)) {
HXLINE(  71)				if ((v->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >()->length == (int)2)) {
HXLINE(  72)					 ::haxe::ui::styles::Value b5 = v->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >()->__get((int)1).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN(  72)					 ::haxe::ui::styles::Value a2 = v->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >()->__get((int)0).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN(  72)					{
HXLINE(  73)						 ::haxe::ui::util::VariantType a3 = this->getVariant(a2,null(),null());
HXDLIN(  73)						 ::haxe::ui::util::VariantType b6 = this->getVariant(b5,null(),null());
HXLINE(  74)						bool _hx_tmp5;
HXDLIN(  74)						if (hx::IsNotNull( a3 )) {
HXLINE(  74)							_hx_tmp5 = hx::IsNotNull( b6 );
            						}
            						else {
HXLINE(  74)							_hx_tmp5 = false;
            						}
HXDLIN(  74)						if (_hx_tmp5) {
HXLINE(  75)							s->paddingTop = (s->paddingBottom = a3);
HXLINE(  76)							s->paddingLeft = (s->paddingRight = b6);
HXLINE(  77)							return true;
            						}
            					}
            				}
            				else {
HXLINE(  80)					 ::haxe::ui::util::VariantType i28 = this->getVariant(v,null(),null());
HXLINE(  81)					if (hx::IsNotNull( i28 )) {
HXLINE(  81)						s->set_padding(i28);
HXDLIN(  81)						return true;
            					}
            				}
            			}
            			else {
HXLINE(  80)				 ::haxe::ui::util::VariantType i29 = this->getVariant(v,null(),null());
HXLINE(  81)				if (hx::IsNotNull( i29 )) {
HXLINE(  81)					s->set_padding(i29);
HXDLIN(  81)					return true;
            				}
            			}
HXLINE(  71)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("padding-bottom",27,b9,bd,d9)) ){
HXLINE(  93)			 ::haxe::ui::util::VariantType i30 = this->getVariant(v,null(),null());
HXLINE(  94)			if (hx::IsNotNull( i30 )) {
HXLINE(  94)				s->paddingBottom = i30;
HXDLIN(  94)				return true;
            			}
HXLINE(  92)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("padding-left",43,93,ce,ce)) ){
HXLINE(  87)			 ::haxe::ui::util::VariantType i31 = this->getVariant(v,null(),null());
HXLINE(  88)			if (hx::IsNotNull( i31 )) {
HXLINE(  88)				s->paddingLeft = i31;
HXDLIN(  88)				return true;
            			}
HXLINE(  86)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("padding-right",20,55,ff,9c)) ){
HXLINE(  90)			 ::haxe::ui::util::VariantType i32 = this->getVariant(v,null(),null());
HXLINE(  91)			if (hx::IsNotNull( i32 )) {
HXLINE(  91)				s->paddingRight = i32;
HXDLIN(  91)				return true;
            			}
HXLINE(  89)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("padding-top",d9,16,74,71)) ){
HXLINE(  84)			 ::haxe::ui::util::VariantType i33 = this->getVariant(v,null(),null());
HXLINE(  85)			if (hx::IsNotNull( i33 )) {
HXLINE(  85)				s->paddingTop = i33;
HXDLIN(  85)				return true;
            			}
HXLINE(  83)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("spacing",83,33,bb,91)) ){
HXLINE( 528)			return this->applyComposite(::Array_obj< ::String >::fromData( _hx_array_data_ef203379_18,2),v,s);
HXDLIN( 528)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("text-align",e5,9f,fc,21)) ){
HXLINE( 594)			::String x7 = this->getIdent(v);
HXLINE( 595)			::String _hx_switch_3 = x7;
            			if (  (_hx_switch_3==HX_("center",d5,25,db,05)) ||  (_hx_switch_3==HX_("justify",50,df,b5,83)) ||  (_hx_switch_3==HX_("left",07,08,b0,47)) ||  (_hx_switch_3==HX_("right",dc,0b,64,e9)) ){
HXLINE( 597)				s->textAlign = x7;
HXLINE( 598)				return true;
HXLINE( 596)				goto _hx_goto_5;
            			}
            			/* default */{
            			}
            			_hx_goto_5:;
HXLINE( 593)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("vertical-align",6e,0c,90,b5)) ){
HXLINE( 586)			::String x8 = this->getIdent(v);
HXLINE( 587)			::String _hx_switch_4 = x8;
            			if (  (_hx_switch_4==HX_("bottom",eb,e6,78,65)) ||  (_hx_switch_4==HX_("center",d5,25,db,05)) ||  (_hx_switch_4==HX_("top",95,66,58,00)) ){
HXLINE( 589)				s->verticalAlign = x8;
HXLINE( 590)				return true;
HXLINE( 588)				goto _hx_goto_6;
            			}
            			/* default */{
            			}
            			_hx_goto_6:;
HXLINE( 585)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("vertical-spacing",6c,65,11,2b)) ){
HXLINE( 536)			 ::haxe::ui::util::VariantType i34 = this->getVariant(v,null(),null());
HXLINE( 537)			if (hx::IsNotNull( i34 )) {
HXLINE( 538)				s->verticalSpacing = i34;
HXLINE( 539)				return true;
            			}
HXLINE( 535)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("width",06,b6,62,ca)) ){
HXLINE( 121)			 ::Dynamic i35 = this->getVal(v);
HXLINE( 122)			if ((this->getIdent(v) == HX_("auto",6f,df,76,40))) {
HXLINE( 123)				s->width = null();
HXLINE( 124)				s->percentWidth = null();
HXLINE( 125)				s->autoWidth = true;
HXLINE( 126)				return true;
            			}
            			else {
HXLINE( 127)				if (hx::IsNotNull( i35 )) {
HXLINE( 128)					s->width = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(i35);
HXLINE( 129)					return true;
            				}
            				else {
HXLINE( 131)					 ::haxe::ui::styles::Unit p1 = this->getUnit(v);
HXLINE( 132)					if (hx::IsNotNull( p1 )) {
HXLINE( 133)						switch((int)(_hx_getEnumValueIndex(p1))){
            							case (int)1: {
HXLINE( 134)								Float x9 = p1->_hx_getFloat(0);
HXLINE( 135)								s->percentWidth = (x9 * (int)100);
HXLINE( 136)								return true;
            							}
            							break;
            							case (int)3: case (int)4: case (int)5: {
HXLINE( 138)								s->width = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromUnit(p1);
HXLINE( 139)								return true;
            							}
            							break;
            							default:{
            							}
            						}
            					}
            				}
            			}
HXLINE( 120)			goto _hx_goto_2;
            		}
            		/* default */{
            		}
            		_hx_goto_2:;
HXLINE( 786)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,applyStyle,return )

bool Parser_obj::applyComposite(::Array< ::String > names, ::haxe::ui::styles::Value v, ::haxe::ui::styles::Style s){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_789_applyComposite)
HXLINE( 790)		::Array< ::Dynamic> vl;
HXDLIN( 790)		if ((_hx_getEnumValueIndex(v) == (int)7)) {
HXLINE( 791)			::Array< ::Dynamic> l = v->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 790)			vl = l;
            		}
            		else {
HXLINE( 790)			vl = ::Array_obj< ::Dynamic>::__new(1)->init(0,v);
            		}
HXLINE( 795)		if ((names->length > vl->length)) {
HXLINE( 796)			 ::haxe::ui::styles::Value last = vl->__get((vl->length - (int)1)).StaticCast<  ::haxe::ui::styles::Value >();
HXLINE( 797)			{
HXLINE( 797)				int _g1 = (int)0;
HXDLIN( 797)				int _g = (names->length - vl->length);
HXDLIN( 797)				while((_g1 < _g)){
HXLINE( 797)					_g1 = (_g1 + (int)1);
HXDLIN( 797)					int i = (_g1 - (int)1);
HXLINE( 798)					vl->push(last);
            				}
            			}
            		}
HXLINE( 802)		while((vl->length > (int)0)){
HXLINE( 803)			bool found = false;
HXLINE( 804)			{
HXLINE( 804)				int _g2 = (int)0;
HXDLIN( 804)				while((_g2 < names->length)){
HXLINE( 804)					::String n = names->__get(_g2);
HXDLIN( 804)					_g2 = (_g2 + (int)1);
HXLINE( 805)					int count = (int)1;
HXLINE( 806)					if ((count > vl->length)) {
HXLINE( 806)						count = vl->length;
            					}
HXLINE( 807)					while((count > (int)0)){
HXLINE( 808)						 ::haxe::ui::styles::Value v1;
HXDLIN( 808)						if ((count == (int)1)) {
HXLINE( 808)							v1 = vl->__get((int)0).StaticCast<  ::haxe::ui::styles::Value >();
            						}
            						else {
HXLINE( 808)							v1 = ::haxe::ui::styles::Value_obj::VGroup(vl->slice((int)0,count));
            						}
HXLINE( 809)						if (this->applyStyle(n,v1,s)) {
HXLINE( 810)							found = true;
HXLINE( 811)							names->remove(n);
HXLINE( 812)							{
HXLINE( 812)								int _g21 = (int)0;
HXDLIN( 812)								int _g11 = count;
HXDLIN( 812)								while((_g21 < _g11)){
HXLINE( 812)									_g21 = (_g21 + (int)1);
HXDLIN( 812)									int i1 = (_g21 - (int)1);
HXLINE( 813)									vl->shift().StaticCast<  ::haxe::ui::styles::Value >();
            								}
            							}
HXLINE( 814)							goto _hx_goto_22;
            						}
HXLINE( 816)						count = (count - (int)1);
            					}
            					_hx_goto_22:;
HXLINE( 818)					if (found) {
HXLINE( 818)						goto _hx_goto_21;
            					}
            				}
            				_hx_goto_21:;
            			}
HXLINE( 820)			if (!(found)) {
HXLINE( 821)				return false;
            			}
            		}
HXLINE( 823)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,applyComposite,return )

::cpp::VirtualArray Parser_obj::getGroup( ::haxe::ui::styles::Value v, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_827_getGroup)
HXDLIN( 827)		if ((_hx_getEnumValueIndex(v) == (int)7)) {
HXLINE( 828)			::Array< ::Dynamic> l = v->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 829)			::cpp::VirtualArray a = ::cpp::VirtualArray_obj::__new();
HXLINE( 830)			{
HXLINE( 830)				int _g = (int)0;
HXDLIN( 830)				while((_g < l->length)){
HXLINE( 830)					 ::haxe::ui::styles::Value v1 = l->__get(_g).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN( 830)					_g = (_g + (int)1);
HXLINE( 831)					 ::Dynamic v2 = f(v1);
HXLINE( 832)					if (hx::IsNull( v2 )) {
HXLINE( 832)						return null();
            					}
HXLINE( 833)					a->push(v2);
            				}
            			}
HXLINE( 835)			return a;
            		}
            		else {
HXLINE( 837)			 ::Dynamic v3 = f(v);
HXLINE( 838)			if (hx::IsNull( v3 )) {
HXLINE( 838)				return null();
            			}
            			else {
HXLINE( 838)				return ::cpp::VirtualArray_obj::__new(1)->init(0,v3);
            			}
            		}
HXLINE( 827)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,getGroup,return )

::cpp::VirtualArray Parser_obj::getList( ::haxe::ui::styles::Value v, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_843_getList)
HXDLIN( 843)		if ((_hx_getEnumValueIndex(v) == (int)6)) {
HXLINE( 844)			::Array< ::Dynamic> l = v->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 845)			::cpp::VirtualArray a = ::cpp::VirtualArray_obj::__new();
HXLINE( 846)			{
HXLINE( 846)				int _g = (int)0;
HXDLIN( 846)				while((_g < l->length)){
HXLINE( 846)					 ::haxe::ui::styles::Value v1 = l->__get(_g).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN( 846)					_g = (_g + (int)1);
HXLINE( 847)					 ::Dynamic v2 = f(v1);
HXLINE( 848)					if (hx::IsNull( v2 )) {
HXLINE( 848)						return null();
            					}
HXLINE( 849)					a->push(v2);
            				}
            			}
HXLINE( 851)			return a;
            		}
            		else {
HXLINE( 853)			 ::Dynamic v3 = f(v);
HXLINE( 854)			if (hx::IsNull( v3 )) {
HXLINE( 854)				return null();
            			}
            			else {
HXLINE( 854)				return ::cpp::VirtualArray_obj::__new(1)->init(0,v3);
            			}
            		}
HXLINE( 843)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,getList,return )

 ::Dynamic Parser_obj::getInt( ::haxe::ui::styles::Value v){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_859_getInt)
HXDLIN( 859)		switch((int)(_hx_getEnumValueIndex(v))){
            			case (int)2: {
HXLINE( 860)				::String u = v->_hx_getString(1);
HXDLIN( 860)				Float f = v->_hx_getFloat(0);
HXLINE( 861)				::String _hx_switch_0 = u;
            				if (  (_hx_switch_0==HX_("pt",04,62,00,00)) ){
HXLINE( 863)					return ::Std_obj::_hx_int(((Float)(f * (int)4) / (Float)(int)3));
HXDLIN( 863)					goto _hx_goto_29;
            				}
            				if (  (_hx_switch_0==HX_("px",08,62,00,00)) ){
HXLINE( 862)					return ::Std_obj::_hx_int(f);
HXDLIN( 862)					goto _hx_goto_29;
            				}
            				/* default */{
HXLINE( 867)					return null();
            				}
            				_hx_goto_29:;
            			}
            			break;
            			case (int)4: {
HXLINE( 869)				int v1 = v->_hx_getInt(0);
HXLINE( 870)				return ::Std_obj::_hx_int(v1);
            			}
            			break;
            			default:{
HXLINE( 872)				return null();
            			}
            		}
HXLINE( 859)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,getInt,return )

 ::Dynamic Parser_obj::getBool( ::haxe::ui::styles::Value v){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_877_getBool)
HXDLIN( 877)		switch((int)(_hx_getEnumValueIndex(v))){
            			case (int)0: {
HXLINE( 880)				::String v1 = v->_hx_getString(0);
HXLINE( 881)				if ((v1 != HX_("true",4e,a7,03,4d))) {
HXLINE( 881)					return (v1 == HX_("yes",27,29,5c,00));
            				}
            				else {
HXLINE( 881)					return true;
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 878)				int v2 = v->_hx_getInt(0);
HXLINE( 879)				return (::Std_obj::_hx_int(v2) == (int)1);
            			}
            			break;
            			default:{
HXLINE( 883)				return null();
            			}
            		}
HXLINE( 877)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,getBool,return )

::String Parser_obj::getString( ::haxe::ui::styles::Value v){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_888_getString)
HXDLIN( 888)		if ((_hx_getEnumValueIndex(v) == (int)1)) {
HXLINE( 889)			::String v1 = v->_hx_getString(0);
HXLINE( 890)			return v1;
            		}
            		else {
HXLINE( 892)			return null();
            		}
HXLINE( 888)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,getString,return )

::cpp::VirtualArray Parser_obj::getCall( ::haxe::ui::styles::Value v){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_897_getCall)
HXDLIN( 897)		if ((_hx_getEnumValueIndex(v) == (int)8)) {
HXLINE( 898)			::Array< ::Dynamic> params = v->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 898)			::String v1 = v->_hx_getString(0);
HXLINE( 899)			::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new();
HXLINE( 900)			arr->push(v1);
HXLINE( 901)			{
HXLINE( 901)				int _g = (int)0;
HXDLIN( 901)				while((_g < params->length)){
HXLINE( 901)					 ::haxe::ui::styles::Value p = params->__get(_g).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN( 901)					_g = (_g + (int)1);
HXLINE( 902)					 ::Dynamic c = this->getCol(p);
HXLINE( 903)					if (hx::IsNotNull( c )) {
HXLINE( 904)						arr->push(c);
            					}
            					else {
HXLINE( 906)						switch((int)(_hx_getEnumValueIndex(p))){
            							case (int)0: {
HXLINE( 911)								::String x = p->_hx_getString(0);
HXLINE( 912)								if ((x == HX_("true",4e,a7,03,4d))) {
HXLINE( 913)									arr->push(true);
            								}
            								else {
HXLINE( 914)									if ((x == HX_("false",a3,35,4f,fb))) {
HXLINE( 915)										arr->push(false);
            									}
            									else {
HXLINE( 917)										arr->push(x);
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 909)								Float x1 = p->_hx_getFloat(0);
HXLINE( 910)								arr->push(x1);
            							}
            							break;
            							case (int)4: {
HXLINE( 907)								int x2 = p->_hx_getInt(0);
HXLINE( 908)								arr->push(x2);
            							}
            							break;
            							default:{
            							}
            						}
            					}
            				}
            			}
HXLINE( 923)			return arr;
            		}
            		else {
HXLINE( 925)			return null();
            		}
HXLINE( 897)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,getCall,return )

 ::Dynamic Parser_obj::getVal( ::haxe::ui::styles::Value v){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_930_getVal)
HXDLIN( 930)		switch((int)(_hx_getEnumValueIndex(v))){
            			case (int)2: {
HXLINE( 931)				::String u = v->_hx_getString(1);
HXDLIN( 931)				Float f = v->_hx_getFloat(0);
HXLINE( 932)				::String _hx_switch_0 = u;
            				if (  (_hx_switch_0==HX_("pt",04,62,00,00)) ){
HXLINE( 934)					return ((Float)(f * (int)4) / (Float)(int)3);
HXDLIN( 934)					goto _hx_goto_35;
            				}
            				if (  (_hx_switch_0==HX_("px",08,62,00,00)) ){
HXLINE( 933)					return f;
HXDLIN( 933)					goto _hx_goto_35;
            				}
            				/* default */{
HXLINE( 935)					return null();
            				}
            				_hx_goto_35:;
            			}
            			break;
            			case (int)3: {
HXLINE( 939)				Float v1 = v->_hx_getFloat(0);
HXLINE( 940)				return v1;
            			}
            			break;
            			case (int)4: {
HXLINE( 937)				int v2 = v->_hx_getInt(0);
HXLINE( 938)				return v2;
            			}
            			break;
            			default:{
HXLINE( 942)				return null();
            			}
            		}
HXLINE( 930)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,getVal,return )

 ::haxe::ui::styles::Unit Parser_obj::getUnit( ::haxe::ui::styles::Value v){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_947_getUnit)
HXDLIN( 947)		switch((int)(_hx_getEnumValueIndex(v))){
            			case (int)2: {
HXLINE( 948)				::String u = v->_hx_getString(1);
HXDLIN( 948)				Float f = v->_hx_getFloat(0);
HXLINE( 949)				::String _hx_switch_0 = u;
            				if (  (_hx_switch_0==HX_("%",25,00,00,00)) ){
HXLINE( 952)					return ::haxe::ui::styles::Unit_obj::Percent(((Float)f / (Float)(int)100));
HXDLIN( 952)					goto _hx_goto_37;
            				}
            				if (  (_hx_switch_0==HX_("pt",04,62,00,00)) ){
HXLINE( 951)					return ::haxe::ui::styles::Unit_obj::Pix(((Float)(f * (int)4) / (Float)(int)3));
HXDLIN( 951)					goto _hx_goto_37;
            				}
            				if (  (_hx_switch_0==HX_("px",08,62,00,00)) ){
HXLINE( 950)					return ::haxe::ui::styles::Unit_obj::Pix(f);
HXDLIN( 950)					goto _hx_goto_37;
            				}
            				if (  (_hx_switch_0==HX_("rem",5a,d9,56,00)) ){
HXLINE( 953)					return ::haxe::ui::styles::Unit_obj::REM(f);
HXDLIN( 953)					goto _hx_goto_37;
            				}
            				if (  (_hx_switch_0==HX_("vh",32,67,00,00)) ){
HXLINE( 954)					return ::haxe::ui::styles::Unit_obj::VH(f);
HXDLIN( 954)					goto _hx_goto_37;
            				}
            				if (  (_hx_switch_0==HX_("vw",41,67,00,00)) ){
HXLINE( 955)					return ::haxe::ui::styles::Unit_obj::VW(f);
HXDLIN( 955)					goto _hx_goto_37;
            				}
            				/* default */{
HXLINE( 956)					return null();
            				}
            				_hx_goto_37:;
            			}
            			break;
            			case (int)3: {
HXLINE( 960)				Float v1 = v->_hx_getFloat(0);
HXLINE( 961)				return ::haxe::ui::styles::Unit_obj::Pix(v1);
            			}
            			break;
            			case (int)4: {
HXLINE( 958)				int v2 = v->_hx_getInt(0);
HXLINE( 959)				return ::haxe::ui::styles::Unit_obj::Pix(v2);
            			}
            			break;
            			default:{
HXLINE( 963)				return null();
            			}
            		}
HXLINE( 947)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,getUnit,return )

 ::haxe::ui::util::VariantType Parser_obj::getVariant( ::haxe::ui::styles::Value v,hx::Null< bool >  __o_allowRem,hx::Null< bool >  __o_allowViewport){
bool allowRem = __o_allowRem.Default(true);
bool allowViewport = __o_allowViewport.Default(true);
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_968_getVariant)
HXDLIN( 968)		switch((int)(_hx_getEnumValueIndex(v))){
            			case (int)2: {
HXLINE( 969)				::String u = v->_hx_getString(1);
HXDLIN( 969)				Float f = v->_hx_getFloat(0);
HXLINE( 970)				::String _hx_switch_0 = u;
            				if (  (_hx_switch_0==HX_("%",25,00,00,00)) ){
HXLINE( 973)					return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromUnit(::haxe::ui::styles::Unit_obj::Percent(((Float)f / (Float)(int)100)));
HXDLIN( 973)					goto _hx_goto_39;
            				}
            				if (  (_hx_switch_0==HX_("pt",04,62,00,00)) ){
HXLINE( 972)					return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(((Float)(f * (int)4) / (Float)(int)3));
HXDLIN( 972)					goto _hx_goto_39;
            				}
            				if (  (_hx_switch_0==HX_("px",08,62,00,00)) ){
HXLINE( 971)					return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(f);
HXDLIN( 971)					goto _hx_goto_39;
            				}
            				if (  (_hx_switch_0==HX_("rem",5a,d9,56,00)) ){
HXLINE( 974)					if (allowRem) {
HXLINE( 974)						return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromUnit(::haxe::ui::styles::Unit_obj::REM(f));
            					}
            					else {
HXLINE( 974)						return null();
            					}
HXDLIN( 974)					goto _hx_goto_39;
            				}
            				if (  (_hx_switch_0==HX_("vh",32,67,00,00)) ){
HXLINE( 975)					if (allowViewport) {
HXLINE( 975)						return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromUnit(::haxe::ui::styles::Unit_obj::VH(f));
            					}
            					else {
HXLINE( 975)						return null();
            					}
HXDLIN( 975)					goto _hx_goto_39;
            				}
            				if (  (_hx_switch_0==HX_("vw",41,67,00,00)) ){
HXLINE( 976)					if (allowViewport) {
HXLINE( 976)						return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromUnit(::haxe::ui::styles::Unit_obj::VW(f));
            					}
            					else {
HXLINE( 976)						return null();
            					}
HXDLIN( 976)					goto _hx_goto_39;
            				}
            				/* default */{
HXLINE( 977)					return null();
            				}
            				_hx_goto_39:;
            			}
            			break;
            			case (int)3: {
HXLINE( 981)				Float v1 = v->_hx_getFloat(0);
HXDLIN( 981)				return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(v1);
            			}
            			break;
            			case (int)4: {
HXLINE( 979)				int v2 = v->_hx_getInt(0);
HXDLIN( 979)				return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(v2);
            			}
            			break;
            			default:{
HXLINE( 984)				return null();
            			}
            		}
HXLINE( 968)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,getVariant,return )

 ::Dynamic Parser_obj::mapIdent( ::haxe::ui::styles::Value v,::cpp::VirtualArray vals){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_988_mapIdent)
HXLINE( 989)		::String i = this->getIdent(v);
HXLINE( 990)		if (hx::IsNull( i )) {
HXLINE( 990)			return null();
            		}
HXLINE( 991)		{
HXLINE( 991)			int _g = (int)0;
HXDLIN( 991)			while((_g < vals->get_length())){
HXLINE( 991)				 ::Dynamic v1 = vals->__get(_g);
HXDLIN( 991)				_g = (_g + (int)1);
HXLINE( 992)				if ((::Type_obj::enumConstructor(v1).toLowerCase() == i)) {
HXLINE( 993)					return v1;
            				}
            			}
            		}
HXLINE( 994)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,mapIdent,return )

::String Parser_obj::getIdent( ::haxe::ui::styles::Value v){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_998_getIdent)
HXDLIN( 998)		if ((_hx_getEnumValueIndex(v) == (int)0)) {
HXLINE( 999)			::String v1 = v->_hx_getString(0);
HXDLIN( 999)			return v1;
            		}
            		else {
HXLINE(1000)			return null();
            		}
HXLINE( 998)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,getIdent,return )

 ::Dynamic Parser_obj::getColAlpha( ::haxe::ui::styles::Value v){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1004_getColAlpha)
HXLINE(1005)		 ::Dynamic c = this->getCol(v);
HXLINE(1006)		bool _hx_tmp;
HXDLIN(1006)		if (hx::IsNotNull( c )) {
HXLINE(1006)			_hx_tmp = (hx::UShr(c,(int)24) == (int)0);
            		}
            		else {
HXLINE(1006)			_hx_tmp = false;
            		}
HXDLIN(1006)		if (_hx_tmp) {
HXLINE(1007)			c = ((int)c | (int)(int)-16777216);
            		}
HXLINE(1008)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,getColAlpha,return )

 ::haxe::ui::styles::FillStyle Parser_obj::getFill( ::haxe::ui::styles::Value v){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1011_getFill)
HXLINE(1012)		 ::Dynamic c = this->getColAlpha(v);
HXLINE(1013)		if (hx::IsNotNull( c )) {
HXLINE(1014)			return ::haxe::ui::styles::FillStyle_obj::Color(c);
            		}
HXLINE(1015)		switch((int)(_hx_getEnumValueIndex(v))){
            			case (int)0: {
HXLINE(1015)				if ((v->_hx_getString(0) == HX_("transparent",52,2b,ba,22))) {
HXLINE(1024)					return ::haxe::ui::styles::FillStyle_obj::Transparent_dyn();
            				}
            			}
            			break;
            			case (int)8: {
HXLINE(1015)				if ((v->_hx_getString(0) == HX_("gradient",f0,39,3f,2a))) {
HXLINE(1015)					if ((v->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >()->length == (int)4)) {
HXLINE(1016)						 ::haxe::ui::styles::Value d = v->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >()->__get((int)3).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN(1016)						 ::haxe::ui::styles::Value c1 = v->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >()->__get((int)2).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN(1016)						 ::haxe::ui::styles::Value b = v->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >()->__get((int)1).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN(1016)						 ::haxe::ui::styles::Value a = v->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >()->__get((int)0).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN(1016)						{
HXLINE(1017)							 ::Dynamic ca = this->getColAlpha(a);
HXLINE(1018)							 ::Dynamic cb = this->getColAlpha(b);
HXLINE(1019)							 ::Dynamic cc = this->getColAlpha(c1);
HXLINE(1020)							 ::Dynamic cd = this->getColAlpha(d);
HXLINE(1021)							bool _hx_tmp;
HXDLIN(1021)							bool _hx_tmp1;
HXDLIN(1021)							bool _hx_tmp2;
HXDLIN(1021)							if (hx::IsNotNull( ca )) {
HXLINE(1021)								_hx_tmp2 = hx::IsNotNull( cb );
            							}
            							else {
HXLINE(1021)								_hx_tmp2 = false;
            							}
HXDLIN(1021)							if (_hx_tmp2) {
HXLINE(1021)								_hx_tmp1 = hx::IsNotNull( cc );
            							}
            							else {
HXLINE(1021)								_hx_tmp1 = false;
            							}
HXDLIN(1021)							if (_hx_tmp1) {
HXLINE(1021)								_hx_tmp = hx::IsNotNull( cd );
            							}
            							else {
HXLINE(1021)								_hx_tmp = false;
            							}
HXDLIN(1021)							if (_hx_tmp) {
HXLINE(1022)								return ::haxe::ui::styles::FillStyle_obj::Gradient(ca,cb,cc,cd);
            							}
            						}
            					}
            				}
            			}
            			break;
            			default:{
            			}
            		}
HXLINE(1027)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,getFill,return )

 ::Dynamic Parser_obj::getCol( ::haxe::ui::styles::Value v){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1031_getCol)
HXDLIN(1031)		switch((int)(_hx_getEnumValueIndex(v))){
            			case (int)0: {
HXLINE(1034)				::String i = v->_hx_getString(0);
HXLINE(1035)				::String _hx_switch_0 = i;
            				if (  (_hx_switch_0==HX_("aqua",3c,d7,73,40)) ){
HXLINE(1041)					return (int)65535;
HXDLIN(1041)					goto _hx_goto_46;
            				}
            				if (  (_hx_switch_0==HX_("black",bf,d5,f1,b4)) ){
HXLINE(1036)					return (int)0;
HXDLIN(1036)					goto _hx_goto_46;
            				}
            				if (  (_hx_switch_0==HX_("blue",9a,42,19,41)) ){
HXLINE(1039)					return (int)255;
HXDLIN(1039)					goto _hx_goto_46;
            				}
            				if (  (_hx_switch_0==HX_("fuchsia",d7,c5,0f,9f)) ){
HXLINE(1042)					return (int)16711935;
HXDLIN(1042)					goto _hx_goto_46;
            				}
            				if (  (_hx_switch_0==HX_("green",c3,0e,ed,99)) ){
HXLINE(1045)					return (int)32768;
HXDLIN(1045)					goto _hx_goto_46;
            				}
            				if (  (_hx_switch_0==HX_("gray",e3,cf,6b,44)) ||  (_hx_switch_0==HX_("grey",5f,d3,6b,44)) ){
HXLINE(1051)					return (int)8421504;
HXDLIN(1051)					goto _hx_goto_46;
            				}
            				if (  (_hx_switch_0==HX_("lime",15,17,b3,47)) ){
HXLINE(1038)					return (int)65280;
HXDLIN(1038)					goto _hx_goto_46;
            				}
            				if (  (_hx_switch_0==HX_("maroon",70,87,73,ba)) ){
HXLINE(1044)					return (int)8388608;
HXDLIN(1044)					goto _hx_goto_46;
            				}
            				if (  (_hx_switch_0==HX_("navy",36,7a,ff,48)) ){
HXLINE(1046)					return (int)128;
HXDLIN(1046)					goto _hx_goto_46;
            				}
            				if (  (_hx_switch_0==HX_("olive",db,82,2d,31)) ){
HXLINE(1047)					return (int)8421376;
HXDLIN(1047)					goto _hx_goto_46;
            				}
            				if (  (_hx_switch_0==HX_("purple",3c,f6,89,71)) ){
HXLINE(1048)					return (int)8388736;
HXDLIN(1048)					goto _hx_goto_46;
            				}
            				if (  (_hx_switch_0==HX_("red",51,d9,56,00)) ){
HXLINE(1037)					return (int)16711680;
HXDLIN(1037)					goto _hx_goto_46;
            				}
            				if (  (_hx_switch_0==HX_("silver",0d,55,da,b7)) ){
HXLINE(1050)					return (int)12632256;
HXDLIN(1050)					goto _hx_goto_46;
            				}
            				if (  (_hx_switch_0==HX_("teal",9c,b8,f9,4c)) ){
HXLINE(1049)					return (int)32896;
HXDLIN(1049)					goto _hx_goto_46;
            				}
            				if (  (_hx_switch_0==HX_("white",a9,4a,bd,c9)) ){
HXLINE(1040)					return (int)16777215;
HXDLIN(1040)					goto _hx_goto_46;
            				}
            				if (  (_hx_switch_0==HX_("yellow",74,9f,5c,d0)) ){
HXLINE(1043)					return (int)16776960;
HXDLIN(1043)					goto _hx_goto_46;
            				}
            				/* default */{
HXLINE(1052)					return null();
            				}
            				_hx_goto_46:;
            			}
            			break;
            			case (int)5: {
HXLINE(1032)				::String v1 = v->_hx_getString(0);
HXLINE(1033)				if ((v1.length == (int)6)) {
HXLINE(1033)					return ::Std_obj::parseInt((HX_("0x",48,2a,00,00) + v1));
            				}
            				else {
HXLINE(1033)					if ((v1.length == (int)3)) {
HXLINE(1033)						::String _hx_tmp = (HX_("0x",48,2a,00,00) + v1.charAt((int)0));
HXDLIN(1033)						::String _hx_tmp1 = (_hx_tmp + v1.charAt((int)0));
HXDLIN(1033)						::String _hx_tmp2 = (_hx_tmp1 + v1.charAt((int)1));
HXDLIN(1033)						::String _hx_tmp3 = (_hx_tmp2 + v1.charAt((int)1));
HXDLIN(1033)						::String _hx_tmp4 = (_hx_tmp3 + v1.charAt((int)2));
HXDLIN(1033)						return ::Std_obj::parseInt((_hx_tmp4 + v1.charAt((int)2)));
            					}
            					else {
HXLINE(1033)						return null();
            					}
            				}
            			}
            			break;
            			case (int)8: {
HXDLIN(1031)				if ((v->_hx_getString(0) == HX_("rgba",b4,d0,a8,4b))) {
HXDLIN(1031)					if ((v->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >()->length == (int)4)) {
HXLINE(1054)						 ::haxe::ui::styles::Value a = v->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >()->__get((int)3).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN(1054)						 ::haxe::ui::styles::Value b = v->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >()->__get((int)2).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN(1054)						 ::haxe::ui::styles::Value g = v->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >()->__get((int)1).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN(1054)						 ::haxe::ui::styles::Value r = v->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >()->__get((int)0).StaticCast<  ::haxe::ui::styles::Value >();
HXLINE(1055)						 ::Dynamic r1 = this->getVal(r);
HXDLIN(1055)						 ::Dynamic g1 = this->getVal(g);
HXDLIN(1055)						 ::Dynamic b1 = this->getVal(b);
HXDLIN(1055)						 ::Dynamic a1 = this->getVal(a);
HXLINE(1068)						bool _hx_tmp5;
HXDLIN(1068)						bool _hx_tmp6;
HXDLIN(1068)						bool _hx_tmp7;
HXDLIN(1068)						if (hx::IsNotNull( r1 )) {
HXLINE(1068)							_hx_tmp7 = hx::IsNotNull( g1 );
            						}
            						else {
HXLINE(1068)							_hx_tmp7 = false;
            						}
HXDLIN(1068)						if (_hx_tmp7) {
HXLINE(1068)							_hx_tmp6 = hx::IsNotNull( b1 );
            						}
            						else {
HXLINE(1068)							_hx_tmp6 = false;
            						}
HXDLIN(1068)						if (_hx_tmp6) {
HXLINE(1068)							_hx_tmp5 = hx::IsNotNull( a1 );
            						}
            						else {
HXLINE(1068)							_hx_tmp5 = false;
            						}
HXDLIN(1068)						if (_hx_tmp5) {
HXLINE(1069)							int v2 = ::Std_obj::_hx_int((a1 * (int)255));
HXDLIN(1069)							if ((v2 < (int)0)) {
HXLINE(1069)								v2 = (int)0;
            							}
HXDLIN(1069)							if ((v2 > (int)255)) {
HXLINE(1069)								v2 = (int)255;
            							}
HXDLIN(1069)							int a2 = v2;
HXDLIN(1069)							if ((a2 == (int)0)) {
HXLINE(1069)								a2 = (int)1;
            							}
HXLINE(1070)							int v3 = ::Std_obj::_hx_int(r1);
HXDLIN(1070)							if ((v3 < (int)0)) {
HXLINE(1070)								v3 = (int)0;
            							}
HXDLIN(1070)							if ((v3 > (int)255)) {
HXLINE(1070)								v3 = (int)255;
            							}
HXDLIN(1070)							int _hx_tmp8 = ((int)((int)a2 << (int)(int)24) | (int)((int)v3 << (int)(int)16));
HXDLIN(1070)							int v4 = ::Std_obj::_hx_int(g1);
HXDLIN(1070)							if ((v4 < (int)0)) {
HXLINE(1070)								v4 = (int)0;
            							}
HXDLIN(1070)							if ((v4 > (int)255)) {
HXLINE(1070)								v4 = (int)255;
            							}
HXDLIN(1070)							int _hx_tmp9 = ((int)_hx_tmp8 | (int)((int)v4 << (int)(int)8));
HXDLIN(1070)							int v5 = ::Std_obj::_hx_int(b1);
HXDLIN(1070)							if ((v5 < (int)0)) {
HXLINE(1070)								v5 = (int)0;
            							}
HXDLIN(1070)							if ((v5 > (int)255)) {
HXLINE(1070)								v5 = (int)255;
            							}
HXDLIN(1070)							return ((int)_hx_tmp9 | (int)v5);
            						}
            						else {
HXLINE(1073)							return null();
            						}
            					}
            					else {
HXLINE(1075)						return null();
            					}
            				}
            				else {
HXLINE(1075)					return null();
            				}
            			}
            			break;
            			default:{
HXLINE(1075)				return null();
            			}
            		}
HXLINE(1031)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,getCol,return )

::String Parser_obj::getFontName( ::haxe::ui::styles::Value v){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1080_getFontName)
HXDLIN(1080)		switch((int)(_hx_getEnumValueIndex(v))){
            			case (int)0: {
HXLINE(1085)				::String i = v->_hx_getString(0);
HXDLIN(1085)				return i;
            			}
            			break;
            			case (int)1: {
HXLINE(1081)				::String s = v->_hx_getString(0);
HXDLIN(1081)				return s;
            			}
            			break;
            			case (int)7: {
HXLINE(1083)				::Array< ::String > g = this->getGroup(v,this->getIdent_dyn());
HXLINE(1084)				if (hx::IsNull( g )) {
HXLINE(1084)					return null();
            				}
            				else {
HXLINE(1084)					return g->join(HX_(" ",20,00,00,00));
            				}
            			}
            			break;
            			default:{
HXLINE(1086)				return null();
            			}
            		}
HXLINE(1080)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,getFontName,return )

 ::Dynamic Parser_obj::unexpected( ::haxe::ui::styles::Token t){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1110_unexpected)
HXDLIN(1110)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,unexpected,return )

void Parser_obj::expect( ::haxe::ui::styles::Token t){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1113_expect)
HXLINE(1114)		 ::haxe::ui::styles::Token tk = this->readToken();
HXLINE(1115)		if (hx::IsNotEq( tk,t )) {
HXLINE(1115)			this->unexpected(tk);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,expect,(void))

void Parser_obj::push( ::haxe::ui::styles::Token t){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1119_push)
HXDLIN(1119)		this->tokens->push(t);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,push,(void))

bool Parser_obj::isToken( ::haxe::ui::styles::Token t){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1122_isToken)
HXLINE(1123)		 ::haxe::ui::styles::Token tk = this->readToken();
HXLINE(1124)		if (hx::IsEq( tk,t )) {
HXLINE(1124)			return true;
            		}
HXLINE(1125)		this->tokens->push(tk);
HXLINE(1126)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,isToken,return )

void Parser_obj::parse(::String css, ::haxe::ui::styles::Style s){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1129_parse)
HXLINE(1130)		this->css = css;
HXLINE(1131)		this->s = s;
HXLINE(1132)		this->pos = (int)0;
HXLINE(1133)		this->tokens = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1134)		this->parseStyle(::haxe::ui::styles::Token_obj::TEof_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,parse,(void))

::String Parser_obj::valueStr( ::haxe::ui::styles::Value v){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1138_valueStr)
HXDLIN(1138)		switch((int)(_hx_getEnumValueIndex(v))){
            			case (int)0: {
HXLINE(1139)				::String i = v->_hx_getString(0);
HXDLIN(1139)				return i;
            			}
            			break;
            			case (int)1: {
HXLINE(1140)				::String s = v->_hx_getString(0);
HXDLIN(1140)				return ((HX_("\"",22,00,00,00) + s) + HX_("\"",22,00,00,00));
            			}
            			break;
            			case (int)2: {
HXLINE(1141)				::String unit = v->_hx_getString(1);
HXDLIN(1141)				Float f = v->_hx_getFloat(0);
HXDLIN(1141)				return (f + unit);
            			}
            			break;
            			case (int)3: {
HXLINE(1142)				Float f1 = v->_hx_getFloat(0);
HXDLIN(1142)				return ::Std_obj::string(f1);
            			}
            			break;
            			case (int)4: {
HXLINE(1143)				int v1 = v->_hx_getInt(0);
HXDLIN(1143)				return ::Std_obj::string(v1);
            			}
            			break;
            			case (int)5: {
HXLINE(1144)				::String v2 = v->_hx_getString(0);
HXDLIN(1144)				return (HX_("#",23,00,00,00) + v2);
            			}
            			break;
            			case (int)6: {
HXLINE(1145)				::Array< ::Dynamic> l = v->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(1146)				::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN(1146)				{
HXLINE(1146)					int _g1 = (int)0;
HXDLIN(1146)					while((_g1 < l->length)){
HXLINE(1146)						 ::haxe::ui::styles::Value v3 = l->__get(_g1).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN(1146)						_g1 = (_g1 + (int)1);
HXDLIN(1146)						_g->push(this->valueStr(v3));
            					}
            				}
HXDLIN(1146)				return _g->join(HX_(", ",74,26,00,00));
            			}
            			break;
            			case (int)7: {
HXLINE(1147)				::Array< ::Dynamic> l1 = v->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(1148)				::Array< ::String > _g2 = ::Array_obj< ::String >::__new(0);
HXDLIN(1148)				{
HXLINE(1148)					int _g11 = (int)0;
HXDLIN(1148)					while((_g11 < l1->length)){
HXLINE(1148)						 ::haxe::ui::styles::Value v4 = l1->__get(_g11).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN(1148)						_g11 = (_g11 + (int)1);
HXDLIN(1148)						_g2->push(this->valueStr(v4));
            					}
            				}
HXDLIN(1148)				return _g2->join(HX_(" ",20,00,00,00));
            			}
            			break;
            			case (int)8: {
HXLINE(1149)				::Array< ::Dynamic> args = v->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(1149)				::String f2 = v->_hx_getString(0);
HXDLIN(1149)				::String _hx_tmp = (f2 + HX_("(",28,00,00,00));
HXDLIN(1149)				::Array< ::String > _g3 = ::Array_obj< ::String >::__new(0);
HXDLIN(1149)				{
HXLINE(1149)					int _g12 = (int)0;
HXDLIN(1149)					while((_g12 < args->length)){
HXLINE(1149)						 ::haxe::ui::styles::Value v5 = args->__get(_g12).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN(1149)						_g12 = (_g12 + (int)1);
HXDLIN(1149)						_g3->push(this->valueStr(v5));
            					}
            				}
HXDLIN(1149)				return ((_hx_tmp + _g3->join(HX_(", ",74,26,00,00))) + HX_(")",29,00,00,00));
            			}
            			break;
            			case (int)9: {
HXLINE(1150)				 ::haxe::ui::styles::Value v6 = v->_hx_getObject(1).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN(1150)				::String label = v->_hx_getString(0);
HXDLIN(1150)				return ((this->valueStr(v6) + HX_(" !",01,1c,00,00)) + label);
            			}
            			break;
            			case (int)10: {
HXLINE(1151)				return HX_("/",2f,00,00,00);
            			}
            			break;
            		}
HXLINE(1138)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,valueStr,return )

void Parser_obj::parseStyle( ::haxe::ui::styles::Token eof){
            	HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1156_parseStyle)
HXDLIN(1156)		while(!(this->isToken(eof))){
HXLINE(1159)			::String r = this->readIdent();
HXLINE(1160)			if (hx::IsNull( r )) {
HXLINE(1161)				goto _hx_goto_58;
            			}
HXLINE(1163)			this->expect(::haxe::ui::styles::Token_obj::TDblDot_dyn());
HXLINE(1164)			 ::haxe::ui::styles::Value v = this->readValue(null());
HXLINE(1165)			if (hx::IsNull( v )) {
HXLINE(1166)				goto _hx_goto_58;
            			}
HXLINE(1168)			 ::haxe::ui::styles::Style s = this->s;
HXLINE(1169)			if ((_hx_getEnumValueIndex(v) == (int)9)) {
HXLINE(1170)				 ::haxe::ui::styles::Value val = v->_hx_getObject(1).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN(1170)				::String label = v->_hx_getString(0);
HXLINE(1171)				if ((label == HX_("important",a2,86,24,63))) {
HXLINE(1172)					v = val;
HXLINE(1173)					if (hx::IsNull( this->simp )) {
HXLINE(1173)						this->simp =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX );
            					}
HXLINE(1174)					s = this->simp;
            				}
            			}
HXLINE(1178)			if (!(this->applyStyle(r,v,s))) {
HXLINE(1183)				if (this->isToken(eof)) {
HXLINE(1184)					goto _hx_goto_58;
            				}
            			}
HXLINE(1185)			this->expect(::haxe::ui::styles::Token_obj::TSemicolon_dyn());
            		}
            		_hx_goto_58:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseStyle,(void))

::Array< ::Dynamic> Parser_obj::parseRules(::String css){
            	HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1189_parseRules)
HXLINE(1190)		this->css = css;
HXLINE(1191)		this->pos = (int)0;
HXLINE(1192)		this->tokens = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1193)		::Array< ::Dynamic> rules = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1194)		while(!(this->isToken(::haxe::ui::styles::Token_obj::TEof_dyn()))){
HXLINE(1197)			::Array< ::Dynamic> classes = this->readClasses();
HXLINE(1198)			this->expect(::haxe::ui::styles::Token_obj::TBrOpen_dyn());
HXLINE(1199)			this->s =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX );
HXLINE(1200)			this->simp = null();
HXLINE(1201)			this->parseStyle(::haxe::ui::styles::Token_obj::TBrClose_dyn());
HXLINE(1202)			{
HXLINE(1202)				int _g = (int)0;
HXDLIN(1202)				while((_g < classes->length)){
HXLINE(1202)					 ::haxe::ui::styles::CssClass c = classes->__get(_g).StaticCast<  ::haxe::ui::styles::CssClass >();
HXDLIN(1202)					_g = (_g + (int)1);
HXLINE(1203)					rules->push( ::Dynamic(hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("c",63,00,00,00),c)
            						->setFixed(1,HX_("s",73,00,00,00),this->s)
            						->setFixed(2,HX_("imp",0c,0c,50,00),false)));
            				}
            			}
HXLINE(1204)			if (hx::IsNotNull( this->simp )) {
HXLINE(1205)				int _g1 = (int)0;
HXDLIN(1205)				while((_g1 < classes->length)){
HXLINE(1205)					 ::haxe::ui::styles::CssClass c1 = classes->__get(_g1).StaticCast<  ::haxe::ui::styles::CssClass >();
HXDLIN(1205)					_g1 = (_g1 + (int)1);
HXLINE(1206)					rules->push( ::Dynamic(hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("c",63,00,00,00),c1)
            						->setFixed(1,HX_("s",73,00,00,00),this->simp)
            						->setFixed(2,HX_("imp",0c,0c,50,00),true)));
            				}
            			}
            		}
HXLINE(1208)		return rules;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseRules,return )

::Array< ::Dynamic> Parser_obj::parseClasses(::String css){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1211_parseClasses)
HXLINE(1212)		this->css = css;
HXLINE(1213)		this->pos = (int)0;
HXLINE(1214)		this->tokens = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1215)		::Array< ::Dynamic> c = this->readClasses();
HXLINE(1216)		this->expect(::haxe::ui::styles::Token_obj::TEof_dyn());
HXLINE(1217)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseClasses,return )

::Array< ::Dynamic> Parser_obj::readClasses(){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1222_readClasses)
HXLINE(1223)		::Array< ::Dynamic> classes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1224)		while(true){
HXLINE(1225)			this->spacesTokens = true;
HXLINE(1226)			this->isToken(::haxe::ui::styles::Token_obj::TSpaces_dyn());
HXLINE(1227)			 ::haxe::ui::styles::CssClass c = this->readClass(null());
HXLINE(1228)			this->spacesTokens = false;
HXLINE(1229)			if (hx::IsNull( c )) {
HXLINE(1229)				goto _hx_goto_65;
            			}
HXLINE(1230)			this->updateClass(c);
HXLINE(1231)			classes->push(c);
HXLINE(1232)			if (!(this->isToken(::haxe::ui::styles::Token_obj::TComma_dyn()))) {
HXLINE(1233)				goto _hx_goto_65;
            			}
            		}
            		_hx_goto_65:;
HXLINE(1235)		if ((classes->length == (int)0)) {
HXLINE(1236)			this->unexpected(this->readToken());
            		}
HXLINE(1237)		return classes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,readClasses,return )

void Parser_obj::updateClass( ::haxe::ui::styles::CssClass c){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1240_updateClass)
HXLINE(1242)		{
HXLINE(1242)			::String _g = c->node;
HXDLIN(1242)			::String _hx_switch_0 = _g;
            			if (  (_hx_switch_0==HX_("div",51,3d,4c,00)) ){
HXLINE(1243)				c->node = HX_("box",0b,be,4a,00);
HXDLIN(1243)				goto _hx_goto_67;
            			}
            			if (  (_hx_switch_0==HX_("h1",c9,5a,00,00)) ||  (_hx_switch_0==HX_("h2",ca,5a,00,00)) ||  (_hx_switch_0==HX_("h3",cb,5a,00,00)) ||  (_hx_switch_0==HX_("h4",cc,5a,00,00)) ){
HXLINE(1246)				c->pseudoClass = c->node;
HXLINE(1247)				c->node = HX_("label",f4,0d,af,6f);
HXLINE(1245)				goto _hx_goto_67;
            			}
            			if (  (_hx_switch_0==HX_("span",ca,da,58,4c)) ){
HXLINE(1244)				c->node = HX_("label",f4,0d,af,6f);
HXDLIN(1244)				goto _hx_goto_67;
            			}
            			_hx_goto_67:;
            		}
HXLINE(1249)		if (hx::IsNotNull( c->parent )) {
HXLINE(1249)			this->updateClass(c->parent);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,updateClass,(void))

 ::haxe::ui::styles::CssClass Parser_obj::readClass( ::haxe::ui::styles::CssClass parent){
            	HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1252_readClass)
HXLINE(1253)		 ::haxe::ui::styles::CssClass c =  ::haxe::ui::styles::CssClass_obj::__alloc( HX_CTX );
HXLINE(1254)		c->parent = parent;
HXLINE(1255)		bool def = false;
HXLINE(1256)		 ::haxe::ui::styles::Token last = null();
HXLINE(1257)		while(true){
HXLINE(1258)			 ::haxe::ui::styles::Token t = this->readToken();
HXLINE(1260)			if (hx::IsNull( last )) {
HXLINE(1261)				switch((int)(_hx_getEnumValueIndex(t))){
            					case (int)0: {
HXLINE(1264)						::String i = t->_hx_getString(0);
HXDLIN(1264)						{
HXLINE(1264)							c->node = i;
HXDLIN(1264)							def = true;
            						}
            					}
            					break;
            					case (int)4: case (int)5: case (int)15: {
HXLINE(1263)						last = t;
            					}
            					break;
            					case (int)9: case (int)10: case (int)13: {
HXLINE(1268)						this->tokens->push(t);
HXLINE(1269)						goto _hx_goto_69;
            					}
            					break;
            					case (int)16: {
HXLINE(1266)						if (def) {
HXLINE(1266)							return this->readClass(c);
            						}
            						else {
HXLINE(1266)							return null();
            						}
            					}
            					break;
            					case (int)18: {
HXLINE(1262)						def = true;
            					}
            					break;
            					default:{
HXLINE(1271)						this->unexpected(t);
            					}
            				}
            			}
            			else {
HXLINE(1274)				switch((int)(_hx_getEnumValueIndex(t))){
            					case (int)0: {
HXLINE(1275)						::String i1 = t->_hx_getString(0);
HXDLIN(1275)						{
HXLINE(1276)							switch((int)(_hx_getEnumValueIndex(last))){
            								case (int)4: {
HXLINE(1279)									c->pseudoClass = i1;
HXDLIN(1279)									def = true;
            								}
            								break;
            								case (int)5: {
HXLINE(1278)									c->id = i1;
HXDLIN(1278)									def = true;
            								}
            								break;
            								case (int)15: {
HXLINE(1277)									c->className = i1;
HXDLIN(1277)									def = true;
            								}
            								break;
            								default:{
HXLINE(1280)									HX_STACK_DO_THROW(HX_("assert",c6,46,03,4c));
            								}
            							}
HXLINE(1282)							last = null();
            						}
            					}
            					break;
            					case (int)10: {
HXLINE(1284)						goto _hx_goto_69;
            					}
            					break;
            					default:{
HXLINE(1286)						this->unexpected(t);
            					}
            				}
            			}
            		}
            		_hx_goto_69:;
HXLINE(1289)		if (def) {
HXLINE(1289)			return c;
            		}
            		else {
HXLINE(1289)			return parent;
            		}
HXDLIN(1289)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,readClass,return )

::String Parser_obj::readIdent(){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1294_readIdent)
HXLINE(1295)		 ::haxe::ui::styles::Token t = this->readToken();
HXLINE(1296)		if ((_hx_getEnumValueIndex(t) == (int)0)) {
HXLINE(1297)			::String i = t->_hx_getString(0);
HXDLIN(1297)			return i;
            		}
            		else {
HXLINE(1298)			return ( (::String)(this->unexpected(t)) );
            		}
HXLINE(1296)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,readIdent,return )

 ::haxe::ui::styles::Value Parser_obj::readValue( ::Dynamic opt){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1302_readValue)
HXLINE(1303)		 ::haxe::ui::styles::Token t = this->readToken();
HXLINE(1304)		 ::haxe::ui::styles::Value v;
HXDLIN(1304)		switch((int)(_hx_getEnumValueIndex(t))){
            			case (int)0: {
HXLINE(1307)				::String i = t->_hx_getString(0);
HXLINE(1304)				v = ::haxe::ui::styles::Value_obj::VIdent(i);
            			}
            			break;
            			case (int)1: {
HXLINE(1309)				::String s = t->_hx_getString(0);
HXLINE(1304)				v = ::haxe::ui::styles::Value_obj::VString(s);
            			}
            			break;
            			case (int)2: {
HXLINE(1311)				int i1 = t->_hx_getInt(0);
HXLINE(1304)				v = this->readValueUnit(i1,i1);
            			}
            			break;
            			case (int)3: {
HXLINE(1313)				Float f = t->_hx_getFloat(0);
HXLINE(1304)				v = this->readValueUnit(f,null());
            			}
            			break;
            			case (int)5: {
HXLINE(1304)				v = ::haxe::ui::styles::Value_obj::VHex(this->readHex());
            			}
            			break;
            			case (int)17: {
HXLINE(1304)				v = ::haxe::ui::styles::Value_obj::VSlash_dyn();
            			}
            			break;
            			default:{
HXLINE(1318)				if (!(opt)) {
HXLINE(1318)					this->unexpected(t);
            				}
HXLINE(1319)				this->tokens->push(t);
HXLINE(1304)				v = null();
            			}
            		}
HXLINE(1322)		if (hx::IsNotNull( v )) {
HXLINE(1322)			v = this->readValueNext(v);
            		}
HXLINE(1323)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,readValue,return )

::String Parser_obj::readHex(){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1326_readHex)
HXLINE(1327)		int start = this->pos;
HXLINE(1328)		while(true){
HXLINE(1329)			int c = this->css.cca(this->pos++);
HXLINE(1330)			bool _hx_tmp;
HXDLIN(1330)			bool _hx_tmp1;
HXDLIN(1330)			bool _hx_tmp2;
HXDLIN(1330)			if ((c >= (int)65)) {
HXLINE(1330)				_hx_tmp2 = (c <= (int)70);
            			}
            			else {
HXLINE(1330)				_hx_tmp2 = false;
            			}
HXDLIN(1330)			if (!(_hx_tmp2)) {
HXLINE(1330)				if ((c >= (int)97)) {
HXLINE(1330)					_hx_tmp1 = (c <= (int)102);
            				}
            				else {
HXLINE(1330)					_hx_tmp1 = false;
            				}
            			}
            			else {
HXLINE(1330)				_hx_tmp1 = true;
            			}
HXDLIN(1330)			if (!(_hx_tmp1)) {
HXLINE(1330)				if ((c >= (int)48)) {
HXLINE(1330)					_hx_tmp = (c <= (int)57);
            				}
            				else {
HXLINE(1330)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE(1330)				_hx_tmp = true;
            			}
HXDLIN(1330)			if (_hx_tmp) {
HXLINE(1331)				continue;
            			}
HXLINE(1332)			this->pos--;
HXLINE(1333)			goto _hx_goto_73;
            		}
            		_hx_goto_73:;
HXLINE(1335)		::String _hx_tmp3 = this->css;
HXDLIN(1335)		return _hx_tmp3.substr(start,(this->pos - start));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,readHex,return )

 ::haxe::ui::styles::Value Parser_obj::readValueUnit(Float f, ::Dynamic i){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1338_readValueUnit)
HXLINE(1339)		 ::haxe::ui::styles::Token t = this->readToken();
HXLINE(1340)		switch((int)(_hx_getEnumValueIndex(t))){
            			case (int)0: {
HXLINE(1341)				::String i1 = t->_hx_getString(0);
HXLINE(1342)				return ::haxe::ui::styles::Value_obj::VUnit(f,i1);
            			}
            			break;
            			case (int)11: {
HXLINE(1344)				return ::haxe::ui::styles::Value_obj::VUnit(f,HX_("%",25,00,00,00));
            			}
            			break;
            			default:{
HXLINE(1346)				this->tokens->push(t);
HXLINE(1347)				if (hx::IsNotNull( i )) {
HXLINE(1348)					return ::haxe::ui::styles::Value_obj::VInt(i);
            				}
            				else {
HXLINE(1350)					return ::haxe::ui::styles::Value_obj::VFloat(f);
            				}
            			}
            		}
HXLINE(1340)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,readValueUnit,return )

 ::haxe::ui::styles::Value Parser_obj::readValueNext( ::haxe::ui::styles::Value v){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1354_readValueNext)
HXLINE(1355)		 ::haxe::ui::styles::Token t = this->readToken();
HXLINE(1356)		switch((int)(_hx_getEnumValueIndex(t))){
            			case (int)6: {
HXLINE(1358)				if ((_hx_getEnumValueIndex(v) == (int)0)) {
HXLINE(1359)					::String i = v->_hx_getString(0);
HXLINE(1360)					if ((i == HX_("url",6f,2b,59,00))) {
HXLINE(1362)						return this->readValueNext(::haxe::ui::styles::Value_obj::VCall(HX_("url",6f,2b,59,00),::Array_obj< ::Dynamic>::__new(1)->init(0,::haxe::ui::styles::Value_obj::VString(this->readUrl()))));
            					}
            					else {
HXLINE(1364)						::Array< ::Dynamic> args;
HXDLIN(1364)						 ::haxe::ui::styles::Value _g = this->readValue(null());
HXDLIN(1364)						if ((_hx_getEnumValueIndex(_g) == (int)6)) {
HXLINE(1365)							::Array< ::Dynamic> l = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(1364)							args = l;
            						}
            						else {
HXLINE(1366)							 ::haxe::ui::styles::Value x = _g;
HXLINE(1364)							args = ::Array_obj< ::Dynamic>::__new(1)->init(0,x);
            						}
HXLINE(1368)						this->expect(::haxe::ui::styles::Token_obj::TPClose_dyn());
HXLINE(1369)						return this->readValueNext(::haxe::ui::styles::Value_obj::VCall(i,args));
            					}
            				}
            				else {
HXLINE(1372)					this->tokens->push(t);
HXLINE(1373)					return v;
            				}
            			}
            			break;
            			case (int)8: {
HXLINE(1376)				 ::haxe::ui::styles::Token t1 = this->readToken();
HXLINE(1377)				if ((_hx_getEnumValueIndex(t1) == (int)0)) {
HXLINE(1378)					::String i1 = t1->_hx_getString(0);
HXLINE(1379)					return ::haxe::ui::styles::Value_obj::VLabel(i1,v);
            				}
            				else {
HXLINE(1381)					return this->unexpected(t1);
            				}
            			}
            			break;
            			case (int)9: {
HXLINE(1384)				return this->loopComma(v,this->readValue(null()));
            			}
            			break;
            			default:{
HXLINE(1386)				this->tokens->push(t);
HXLINE(1387)				 ::haxe::ui::styles::Value v2 = this->readValue(true);
HXLINE(1388)				if (hx::IsNull( v2 )) {
HXLINE(1389)					return v;
            				}
            				else {
HXLINE(1391)					return this->loopNext(v,v2);
            				}
            			}
            		}
HXLINE(1356)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,readValueNext,return )

 ::haxe::ui::styles::Value Parser_obj::loopNext( ::haxe::ui::styles::Value v, ::haxe::ui::styles::Value v2){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1396_loopNext)
HXDLIN(1396)		switch((int)(_hx_getEnumValueIndex(v2))){
            			case (int)6: {
HXLINE(1400)				::Array< ::Dynamic> l = v2->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(1401)				l[(int)0] = this->loopNext(v,l->__get((int)0).StaticCast<  ::haxe::ui::styles::Value >());
HXLINE(1402)				return v2;
            			}
            			break;
            			case (int)7: {
HXLINE(1397)				::Array< ::Dynamic> l1 = v2->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(1398)				l1->unshift(v);
HXLINE(1399)				return v2;
            			}
            			break;
            			case (int)9: {
HXLINE(1403)				 ::haxe::ui::styles::Value v21 = v2->_hx_getObject(1).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN(1403)				::String lab = v2->_hx_getString(0);
HXLINE(1404)				return ::haxe::ui::styles::Value_obj::VLabel(lab,this->loopNext(v,v21));
            			}
            			break;
            			default:{
HXLINE(1406)				return ::haxe::ui::styles::Value_obj::VGroup(::Array_obj< ::Dynamic>::__new(2)->init(0,v)->init(1,v2));
            			}
            		}
HXLINE(1396)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,loopNext,return )

 ::haxe::ui::styles::Value Parser_obj::loopComma( ::haxe::ui::styles::Value v, ::haxe::ui::styles::Value v2){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1411_loopComma)
HXDLIN(1411)		switch((int)(_hx_getEnumValueIndex(v2))){
            			case (int)6: {
HXLINE(1412)				::Array< ::Dynamic> l = v2->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(1413)				l->unshift(v);
HXLINE(1414)				return v2;
            			}
            			break;
            			case (int)9: {
HXLINE(1415)				 ::haxe::ui::styles::Value v21 = v2->_hx_getObject(1).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN(1415)				::String lab = v2->_hx_getString(0);
HXLINE(1416)				return ::haxe::ui::styles::Value_obj::VLabel(lab,this->loopComma(v,v21));
            			}
            			break;
            			default:{
HXLINE(1418)				return ::haxe::ui::styles::Value_obj::VList(::Array_obj< ::Dynamic>::__new(2)->init(0,v)->init(1,v2));
            			}
            		}
HXLINE(1411)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,loopComma,return )

bool Parser_obj::isSpace(int c){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1425_isSpace)
HXDLIN(1425)		bool _hx_tmp;
HXDLIN(1425)		bool _hx_tmp1;
HXDLIN(1425)		if ((c != (int)32)) {
HXDLIN(1425)			_hx_tmp1 = (c == (int)10);
            		}
            		else {
HXDLIN(1425)			_hx_tmp1 = true;
            		}
HXDLIN(1425)		if (!(_hx_tmp1)) {
HXDLIN(1425)			_hx_tmp = (c == (int)13);
            		}
            		else {
HXDLIN(1425)			_hx_tmp = true;
            		}
HXDLIN(1425)		if (!(_hx_tmp)) {
HXDLIN(1425)			return (c == (int)9);
            		}
            		else {
HXDLIN(1425)			return true;
            		}
HXDLIN(1425)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,isSpace,return )

bool Parser_obj::isIdentChar(int c){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1429_isIdentChar)
HXDLIN(1429)		bool _hx_tmp;
HXDLIN(1429)		bool _hx_tmp1;
HXDLIN(1429)		bool _hx_tmp2;
HXDLIN(1429)		if ((c >= (int)97)) {
HXDLIN(1429)			_hx_tmp2 = (c <= (int)122);
            		}
            		else {
HXDLIN(1429)			_hx_tmp2 = false;
            		}
HXDLIN(1429)		if (!(_hx_tmp2)) {
HXDLIN(1429)			if ((c >= (int)65)) {
HXDLIN(1429)				_hx_tmp1 = (c <= (int)90);
            			}
            			else {
HXDLIN(1429)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXDLIN(1429)			_hx_tmp1 = true;
            		}
HXDLIN(1429)		if (!(_hx_tmp1)) {
HXDLIN(1429)			_hx_tmp = (c == (int)45);
            		}
            		else {
HXDLIN(1429)			_hx_tmp = true;
            		}
HXDLIN(1429)		if (!(_hx_tmp)) {
HXDLIN(1429)			return (c == (int)95);
            		}
            		else {
HXDLIN(1429)			return true;
            		}
HXDLIN(1429)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,isIdentChar,return )

bool Parser_obj::isNum(int c){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1433_isNum)
HXDLIN(1433)		if ((c >= (int)48)) {
HXDLIN(1433)			return (c <= (int)57);
            		}
            		else {
HXDLIN(1433)			return false;
            		}
HXDLIN(1433)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,isNum,return )

int Parser_obj::next(){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1437_next)
HXDLIN(1437)		return this->css.cca(this->pos++);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,next,return )

::String Parser_obj::readUrl(){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1440_readUrl)
HXLINE(1441)		int c0 = this->css.cca(this->pos++);
HXLINE(1442)		while(true){
HXLINE(1442)			bool _hx_tmp;
HXDLIN(1442)			bool _hx_tmp1;
HXDLIN(1442)			bool _hx_tmp2;
HXDLIN(1442)			if ((c0 != (int)32)) {
HXLINE(1442)				_hx_tmp2 = (c0 == (int)10);
            			}
            			else {
HXLINE(1442)				_hx_tmp2 = true;
            			}
HXDLIN(1442)			if (!(_hx_tmp2)) {
HXLINE(1442)				_hx_tmp1 = (c0 == (int)13);
            			}
            			else {
HXLINE(1442)				_hx_tmp1 = true;
            			}
HXDLIN(1442)			if (!(_hx_tmp1)) {
HXLINE(1442)				_hx_tmp = (c0 == (int)9);
            			}
            			else {
HXLINE(1442)				_hx_tmp = true;
            			}
HXDLIN(1442)			if (!(_hx_tmp)) {
HXLINE(1442)				goto _hx_goto_83;
            			}
HXLINE(1443)			c0 = this->css.cca(this->pos++);
            		}
            		_hx_goto_83:;
HXLINE(1444)		int quote = c0;
HXLINE(1445)		bool _hx_tmp3;
HXDLIN(1445)		if ((quote != (int)39)) {
HXLINE(1445)			_hx_tmp3 = (quote == (int)34);
            		}
            		else {
HXLINE(1445)			_hx_tmp3 = true;
            		}
HXDLIN(1445)		if (_hx_tmp3) {
HXLINE(1446)			this->pos--;
HXLINE(1447)			 ::haxe::ui::styles::Token _g = this->readToken();
HXDLIN(1447)			if ((_hx_getEnumValueIndex(_g) == (int)1)) {
HXLINE(1448)				::String s = _g->_hx_getString(0);
HXLINE(1449)				int c01 = this->css.cca(this->pos++);
HXLINE(1450)				while(true){
HXLINE(1450)					bool _hx_tmp4;
HXDLIN(1450)					bool _hx_tmp5;
HXDLIN(1450)					bool _hx_tmp6;
HXDLIN(1450)					if ((c01 != (int)32)) {
HXLINE(1450)						_hx_tmp6 = (c01 == (int)10);
            					}
            					else {
HXLINE(1450)						_hx_tmp6 = true;
            					}
HXDLIN(1450)					if (!(_hx_tmp6)) {
HXLINE(1450)						_hx_tmp5 = (c01 == (int)13);
            					}
            					else {
HXLINE(1450)						_hx_tmp5 = true;
            					}
HXDLIN(1450)					if (!(_hx_tmp5)) {
HXLINE(1450)						_hx_tmp4 = (c01 == (int)9);
            					}
            					else {
HXLINE(1450)						_hx_tmp4 = true;
            					}
HXDLIN(1450)					if (!(_hx_tmp4)) {
HXLINE(1450)						goto _hx_goto_84;
            					}
HXLINE(1451)					c01 = this->css.cca(this->pos++);
            				}
            				_hx_goto_84:;
HXLINE(1452)				if ((c01 != (int)41)) {
HXLINE(1453)					HX_STACK_DO_THROW((HX_("Invalid char ",81,66,ec,29) + c01));
            				}
HXLINE(1454)				return s;
            			}
            			else {
HXLINE(1455)				HX_STACK_DO_THROW(HX_("assert",c6,46,03,4c));
            			}
            		}
HXLINE(1459)		int start = (this->pos - (int)1);
HXLINE(1460)		while((c0 != (int)0)){
HXLINE(1463)			c0 = this->css.cca(this->pos++);
HXLINE(1464)			if ((c0 == (int)41)) {
HXLINE(1464)				goto _hx_goto_85;
            			}
            		}
            		_hx_goto_85:;
HXLINE(1466)		::String _hx_tmp7 = this->css;
HXDLIN(1466)		return ::StringTools_obj::trim(_hx_tmp7.substr(start,((this->pos - start) - (int)1)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,readUrl,return )

 ::haxe::ui::styles::Token Parser_obj::readToken(){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_1478_readToken)
HXLINE(1480)		 ::haxe::ui::styles::Token t = this->tokens->pop().StaticCast<  ::haxe::ui::styles::Token >();
HXLINE(1481)		if (hx::IsNotNull( t )) {
HXLINE(1482)			return t;
            		}
HXLINE(1483)		while(true){
HXLINE(1484)			int c = this->css.cca(this->pos++);
HXLINE(1485)			if ((c == (int)0)) {
HXLINE(1486)				return ::haxe::ui::styles::Token_obj::TEof_dyn();
            			}
HXLINE(1487)			bool _hx_tmp;
HXDLIN(1487)			bool _hx_tmp1;
HXDLIN(1487)			bool _hx_tmp2;
HXDLIN(1487)			if ((c != (int)32)) {
HXLINE(1487)				_hx_tmp2 = (c == (int)10);
            			}
            			else {
HXLINE(1487)				_hx_tmp2 = true;
            			}
HXDLIN(1487)			if (!(_hx_tmp2)) {
HXLINE(1487)				_hx_tmp1 = (c == (int)13);
            			}
            			else {
HXLINE(1487)				_hx_tmp1 = true;
            			}
HXDLIN(1487)			if (!(_hx_tmp1)) {
HXLINE(1487)				_hx_tmp = (c == (int)9);
            			}
            			else {
HXLINE(1487)				_hx_tmp = true;
            			}
HXDLIN(1487)			if (_hx_tmp) {
HXLINE(1488)				if (this->spacesTokens) {
HXLINE(1489)					while(true){
HXLINE(1489)						int c1 = this->css.cca(this->pos++);
HXDLIN(1489)						bool _hx_tmp3;
HXDLIN(1489)						bool _hx_tmp4;
HXDLIN(1489)						bool _hx_tmp5;
HXDLIN(1489)						if ((c1 != (int)32)) {
HXLINE(1489)							_hx_tmp5 = (c1 == (int)10);
            						}
            						else {
HXLINE(1489)							_hx_tmp5 = true;
            						}
HXDLIN(1489)						if (!(_hx_tmp5)) {
HXLINE(1489)							_hx_tmp4 = (c1 == (int)13);
            						}
            						else {
HXLINE(1489)							_hx_tmp4 = true;
            						}
HXDLIN(1489)						if (!(_hx_tmp4)) {
HXLINE(1489)							_hx_tmp3 = (c1 == (int)9);
            						}
            						else {
HXLINE(1489)							_hx_tmp3 = true;
            						}
HXDLIN(1489)						if (!(_hx_tmp3)) {
HXLINE(1489)							goto _hx_goto_88;
            						}
            					}
            					_hx_goto_88:;
HXLINE(1491)					this->pos--;
HXLINE(1492)					return ::haxe::ui::styles::Token_obj::TSpaces_dyn();
            				}
HXLINE(1495)				continue;
            			}
HXLINE(1497)			bool _hx_tmp6;
HXDLIN(1497)			bool _hx_tmp7;
HXDLIN(1497)			if ((c >= (int)48)) {
HXLINE(1497)				_hx_tmp7 = (c <= (int)57);
            			}
            			else {
HXLINE(1497)				_hx_tmp7 = false;
            			}
HXDLIN(1497)			if (!(_hx_tmp7)) {
HXLINE(1497)				_hx_tmp6 = (c == (int)45);
            			}
            			else {
HXLINE(1497)				_hx_tmp6 = true;
            			}
HXDLIN(1497)			if (_hx_tmp6) {
HXLINE(1498)				int i = (int)0;
HXDLIN(1498)				bool neg = false;
HXLINE(1499)				if ((c == (int)45)) {
HXLINE(1499)					c = (int)48;
HXDLIN(1499)					neg = true;
            				}
HXLINE(1500)				while(true){
HXLINE(1501)					i = ((i * (int)10) + (c - (int)48));
HXLINE(1502)					c = this->css.cca(this->pos++);
HXLINE(1503)					bool _hx_tmp8;
HXDLIN(1503)					if ((c >= (int)48)) {
HXLINE(1503)						_hx_tmp8 = (c <= (int)57);
            					}
            					else {
HXLINE(1503)						_hx_tmp8 = false;
            					}
HXLINE(1500)					if (!(_hx_tmp8)) {
HXLINE(1500)						goto _hx_goto_89;
            					}
            				}
            				_hx_goto_89:;
HXLINE(1504)				if ((c == (int)46)) {
HXLINE(1505)					Float f = i;
HXLINE(1506)					Float k = ((Float)0.1);
HXLINE(1507)					while(true){
HXLINE(1507)						c = this->css.cca(this->pos++);
HXDLIN(1507)						int c2 = c;
HXDLIN(1507)						bool _hx_tmp9;
HXDLIN(1507)						if ((c2 >= (int)48)) {
HXLINE(1507)							_hx_tmp9 = (c2 <= (int)57);
            						}
            						else {
HXLINE(1507)							_hx_tmp9 = false;
            						}
HXDLIN(1507)						if (!(_hx_tmp9)) {
HXLINE(1507)							goto _hx_goto_90;
            						}
HXLINE(1508)						f = (f + ((c - (int)48) * k));
HXLINE(1509)						k = (k * ((Float)0.1));
            					}
            					_hx_goto_90:;
HXLINE(1511)					this->pos--;
HXLINE(1512)					Float _hx_tmp10;
HXDLIN(1512)					if (neg) {
HXLINE(1512)						_hx_tmp10 = -(f);
            					}
            					else {
HXLINE(1512)						_hx_tmp10 = f;
            					}
HXDLIN(1512)					return ::haxe::ui::styles::Token_obj::TFloat(_hx_tmp10);
            				}
HXLINE(1514)				this->pos--;
HXLINE(1515)				int _hx_tmp11;
HXDLIN(1515)				if (neg) {
HXLINE(1515)					_hx_tmp11 = -(i);
            				}
            				else {
HXLINE(1515)					_hx_tmp11 = i;
            				}
HXDLIN(1515)				return ::haxe::ui::styles::Token_obj::TInt(_hx_tmp11);
            			}
HXLINE(1517)			bool _hx_tmp12;
HXDLIN(1517)			bool _hx_tmp13;
HXDLIN(1517)			bool _hx_tmp14;
HXDLIN(1517)			bool _hx_tmp15;
HXDLIN(1517)			if ((c >= (int)97)) {
HXLINE(1517)				_hx_tmp15 = (c <= (int)122);
            			}
            			else {
HXLINE(1517)				_hx_tmp15 = false;
            			}
HXDLIN(1517)			if (!(_hx_tmp15)) {
HXLINE(1517)				if ((c >= (int)65)) {
HXLINE(1517)					_hx_tmp14 = (c <= (int)90);
            				}
            				else {
HXLINE(1517)					_hx_tmp14 = false;
            				}
            			}
            			else {
HXLINE(1517)				_hx_tmp14 = true;
            			}
HXDLIN(1517)			if (!(_hx_tmp14)) {
HXLINE(1517)				_hx_tmp13 = (c == (int)45);
            			}
            			else {
HXLINE(1517)				_hx_tmp13 = true;
            			}
HXDLIN(1517)			if (!(_hx_tmp13)) {
HXLINE(1517)				_hx_tmp12 = (c == (int)95);
            			}
            			else {
HXLINE(1517)				_hx_tmp12 = true;
            			}
HXDLIN(1517)			if (_hx_tmp12) {
HXLINE(1518)				int pos = (this->pos - (int)1);
HXLINE(1519)				while(true){
HXLINE(1519)					c = this->css.cca(this->pos++);
HXDLIN(1519)					bool _hx_tmp16;
HXDLIN(1519)					bool _hx_tmp17;
HXDLIN(1519)					bool _hx_tmp18;
HXDLIN(1519)					bool _hx_tmp19;
HXDLIN(1519)					bool _hx_tmp20;
HXDLIN(1519)					if ((c >= (int)97)) {
HXLINE(1519)						_hx_tmp20 = (c <= (int)122);
            					}
            					else {
HXLINE(1519)						_hx_tmp20 = false;
            					}
HXDLIN(1519)					if (!(_hx_tmp20)) {
HXLINE(1519)						if ((c >= (int)65)) {
HXLINE(1519)							_hx_tmp19 = (c <= (int)90);
            						}
            						else {
HXLINE(1519)							_hx_tmp19 = false;
            						}
            					}
            					else {
HXLINE(1519)						_hx_tmp19 = true;
            					}
HXDLIN(1519)					if (!(_hx_tmp19)) {
HXLINE(1519)						_hx_tmp18 = (c == (int)45);
            					}
            					else {
HXLINE(1519)						_hx_tmp18 = true;
            					}
HXDLIN(1519)					if (!(_hx_tmp18)) {
HXLINE(1519)						_hx_tmp17 = (c == (int)95);
            					}
            					else {
HXLINE(1519)						_hx_tmp17 = true;
            					}
HXDLIN(1519)					if (!(_hx_tmp17)) {
HXLINE(1519)						if ((c >= (int)48)) {
HXLINE(1519)							_hx_tmp16 = (c <= (int)57);
            						}
            						else {
HXLINE(1519)							_hx_tmp16 = false;
            						}
            					}
            					else {
HXLINE(1519)						_hx_tmp16 = true;
            					}
HXDLIN(1519)					if (!(_hx_tmp16)) {
HXLINE(1519)						goto _hx_goto_91;
            					}
            				}
            				_hx_goto_91:;
HXLINE(1520)				this->pos--;
HXLINE(1521)				::String _hx_tmp21 = this->css;
HXDLIN(1521)				return ::haxe::ui::styles::Token_obj::TIdent(_hx_tmp21.substr(pos,(this->pos - pos)));
            			}
HXLINE(1523)			switch((int)(c)){
            				case (int)33: {
HXLINE(1528)					return ::haxe::ui::styles::Token_obj::TExclam_dyn();
            				}
            				break;
            				case (int)35: {
HXLINE(1525)					return ::haxe::ui::styles::Token_obj::TSharp_dyn();
            				}
            				break;
            				case (int)37: {
HXLINE(1529)					return ::haxe::ui::styles::Token_obj::TPercent_dyn();
            				}
            				break;
            				case (int)34: case (int)39: {
HXLINE(1553)					int pos1 = this->pos;
HXLINE(1554)					int k1;
HXLINE(1555)					while(true){
HXLINE(1555)						k1 = this->css.cca(this->pos++);
HXDLIN(1555)						if (!((k1 != c))) {
HXLINE(1555)							goto _hx_goto_92;
            						}
HXLINE(1556)						if ((k1 == (int)0)) {
HXLINE(1557)							HX_STACK_DO_THROW(HX_("Unclosed string constant",58,29,f4,89));
            						}
HXLINE(1558)						if ((k1 == (int)92)) {
HXLINE(1559)							HX_STACK_DO_THROW(HX_("todo",c6,51,01,4d));
            						}
            					}
            					_hx_goto_92:;
HXLINE(1563)					::String _hx_tmp22 = this->css;
HXDLIN(1563)					return ::haxe::ui::styles::Token_obj::TString(_hx_tmp22.substr(pos1,((this->pos - pos1) - (int)1)));
            				}
            				break;
            				case (int)40: {
HXLINE(1526)					return ::haxe::ui::styles::Token_obj::TPOpen_dyn();
            				}
            				break;
            				case (int)41: {
HXLINE(1527)					return ::haxe::ui::styles::Token_obj::TPClose_dyn();
            				}
            				break;
            				case (int)42: {
HXLINE(1535)					return ::haxe::ui::styles::Token_obj::TStar_dyn();
            				}
            				break;
            				case (int)44: {
HXLINE(1534)					return ::haxe::ui::styles::Token_obj::TComma_dyn();
            				}
            				break;
            				case (int)46: {
HXLINE(1531)					return ::haxe::ui::styles::Token_obj::TDot_dyn();
            				}
            				break;
            				case (int)47: {
HXLINE(1537)					c = this->css.cca(this->pos++);
HXDLIN(1537)					if ((c != (int)42)) {
HXLINE(1538)						this->pos--;
HXLINE(1539)						return ::haxe::ui::styles::Token_obj::TSlash_dyn();
            					}
HXLINE(1541)					while(true){
HXLINE(1542)						while(true){
HXLINE(1542)							c = this->css.cca(this->pos++);
HXDLIN(1542)							if (!((c != (int)42))) {
HXLINE(1542)								goto _hx_goto_94;
            							}
HXLINE(1543)							if ((c == (int)0)) {
HXLINE(1544)								HX_STACK_DO_THROW(HX_("Unclosed comment",24,40,b0,2e));
            							}
            						}
            						_hx_goto_94:;
HXLINE(1546)						c = this->css.cca(this->pos++);
HXLINE(1547)						if ((c == (int)47)) {
HXLINE(1547)							goto _hx_goto_93;
            						}
HXLINE(1548)						if ((c == (int)0)) {
HXLINE(1549)							HX_STACK_DO_THROW(HX_("Unclosed comment",24,40,b0,2e));
            						}
            					}
            					_hx_goto_93:;
HXLINE(1551)					return this->readToken();
            				}
            				break;
            				case (int)58: {
HXLINE(1524)					return ::haxe::ui::styles::Token_obj::TDblDot_dyn();
            				}
            				break;
            				case (int)59: {
HXLINE(1530)					return ::haxe::ui::styles::Token_obj::TSemicolon_dyn();
            				}
            				break;
            				case (int)123: {
HXLINE(1532)					return ::haxe::ui::styles::Token_obj::TBrOpen_dyn();
            				}
            				break;
            				case (int)125: {
HXLINE(1533)					return ::haxe::ui::styles::Token_obj::TBrClose_dyn();
            				}
            				break;
            				default:{
            				}
            			}
HXLINE(1566)			this->pos--;
HXLINE(1567)			HX_STACK_DO_THROW((HX_("Invalid char ",81,66,ec,29) + this->css.charAt(this->pos)));
            		}
HXLINE(1483)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,readToken,return )


hx::ObjectPtr< Parser_obj > Parser_obj::__new() {
	hx::ObjectPtr< Parser_obj > __this = new Parser_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Parser_obj > Parser_obj::__alloc(hx::Ctx *_hx_ctx) {
	Parser_obj *__this = (Parser_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Parser_obj), true, "haxe.ui.styles.Parser"));
	*(void **)__this = Parser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Parser_obj::Parser_obj()
{
}

void Parser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Parser);
	HX_MARK_MEMBER_NAME(css,"css");
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(simp,"simp");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(spacesTokens,"spacesTokens");
	HX_MARK_MEMBER_NAME(tokens,"tokens");
	HX_MARK_END_CLASS();
}

void Parser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(css,"css");
	HX_VISIT_MEMBER_NAME(s,"s");
	HX_VISIT_MEMBER_NAME(simp,"simp");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(spacesTokens,"spacesTokens");
	HX_VISIT_MEMBER_NAME(tokens,"tokens");
}

hx::Val Parser_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return hx::Val( s ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"css") ) { return hx::Val( css ); }
		if (HX_FIELD_EQ(inName,"pos") ) { return hx::Val( pos ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"simp") ) { return hx::Val( simp ); }
		if (HX_FIELD_EQ(inName,"push") ) { return hx::Val( push_dyn() ); }
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return hx::Val( parse_dyn() ); }
		if (HX_FIELD_EQ(inName,"isNum") ) { return hx::Val( isNum_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tokens") ) { return hx::Val( tokens ); }
		if (HX_FIELD_EQ(inName,"getInt") ) { return hx::Val( getInt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getVal") ) { return hx::Val( getVal_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCol") ) { return hx::Val( getCol_dyn() ); }
		if (HX_FIELD_EQ(inName,"expect") ) { return hx::Val( expect_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getList") ) { return hx::Val( getList_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBool") ) { return hx::Val( getBool_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCall") ) { return hx::Val( getCall_dyn() ); }
		if (HX_FIELD_EQ(inName,"getUnit") ) { return hx::Val( getUnit_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFill") ) { return hx::Val( getFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"isToken") ) { return hx::Val( isToken_dyn() ); }
		if (HX_FIELD_EQ(inName,"readHex") ) { return hx::Val( readHex_dyn() ); }
		if (HX_FIELD_EQ(inName,"isSpace") ) { return hx::Val( isSpace_dyn() ); }
		if (HX_FIELD_EQ(inName,"readUrl") ) { return hx::Val( readUrl_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getGroup") ) { return hx::Val( getGroup_dyn() ); }
		if (HX_FIELD_EQ(inName,"mapIdent") ) { return hx::Val( mapIdent_dyn() ); }
		if (HX_FIELD_EQ(inName,"getIdent") ) { return hx::Val( getIdent_dyn() ); }
		if (HX_FIELD_EQ(inName,"valueStr") ) { return hx::Val( valueStr_dyn() ); }
		if (HX_FIELD_EQ(inName,"loopNext") ) { return hx::Val( loopNext_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getString") ) { return hx::Val( getString_dyn() ); }
		if (HX_FIELD_EQ(inName,"readClass") ) { return hx::Val( readClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"readIdent") ) { return hx::Val( readIdent_dyn() ); }
		if (HX_FIELD_EQ(inName,"readValue") ) { return hx::Val( readValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"loopComma") ) { return hx::Val( loopComma_dyn() ); }
		if (HX_FIELD_EQ(inName,"readToken") ) { return hx::Val( readToken_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return hx::Val( applyStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"getVariant") ) { return hx::Val( getVariant_dyn() ); }
		if (HX_FIELD_EQ(inName,"unexpected") ) { return hx::Val( unexpected_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseStyle") ) { return hx::Val( parseStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseRules") ) { return hx::Val( parseRules_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getColAlpha") ) { return hx::Val( getColAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFontName") ) { return hx::Val( getFontName_dyn() ); }
		if (HX_FIELD_EQ(inName,"readClasses") ) { return hx::Val( readClasses_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateClass") ) { return hx::Val( updateClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"isIdentChar") ) { return hx::Val( isIdentChar_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"spacesTokens") ) { return hx::Val( spacesTokens ); }
		if (HX_FIELD_EQ(inName,"parseClasses") ) { return hx::Val( parseClasses_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readValueUnit") ) { return hx::Val( readValueUnit_dyn() ); }
		if (HX_FIELD_EQ(inName,"readValueNext") ) { return hx::Val( readValueNext_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"notImplemented") ) { return hx::Val( notImplemented_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyComposite") ) { return hx::Val( applyComposite_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Parser_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast<  ::haxe::ui::styles::Style >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"css") ) { css=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"simp") ) { simp=inValue.Cast<  ::haxe::ui::styles::Style >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tokens") ) { tokens=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"spacesTokens") ) { spacesTokens=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Parser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("css","\xc3","\x83","\x4b","\x00"));
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("simp","\x79","\x95","\x53","\x4c"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("spacesTokens","\x27","\x1c","\x67","\x5f"));
	outFields->push(HX_HCSTRING("tokens","\x5a","\x17","\xe7","\x91"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Parser_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Parser_obj,css),HX_HCSTRING("css","\xc3","\x83","\x4b","\x00")},
	{hx::fsObject /*::haxe::ui::styles::Style*/ ,(int)offsetof(Parser_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
	{hx::fsObject /*::haxe::ui::styles::Style*/ ,(int)offsetof(Parser_obj,simp),HX_HCSTRING("simp","\x79","\x95","\x53","\x4c")},
	{hx::fsInt,(int)offsetof(Parser_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsBool,(int)offsetof(Parser_obj,spacesTokens),HX_HCSTRING("spacesTokens","\x27","\x1c","\x67","\x5f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Parser_obj,tokens),HX_HCSTRING("tokens","\x5a","\x17","\xe7","\x91")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Parser_obj_sStaticStorageInfo = 0;
#endif

static ::String Parser_obj_sMemberFields[] = {
	HX_HCSTRING("css","\xc3","\x83","\x4b","\x00"),
	HX_HCSTRING("s","\x73","\x00","\x00","\x00"),
	HX_HCSTRING("simp","\x79","\x95","\x53","\x4c"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("spacesTokens","\x27","\x1c","\x67","\x5f"),
	HX_HCSTRING("tokens","\x5a","\x17","\xe7","\x91"),
	HX_HCSTRING("notImplemented","\x6f","\x3a","\x1a","\x27"),
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("applyComposite","\xb9","\x4c","\x23","\x01"),
	HX_HCSTRING("getGroup","\xc9","\xc2","\xcb","\xf9"),
	HX_HCSTRING("getList","\x14","\xcc","\x35","\x1a"),
	HX_HCSTRING("getInt","\xf9","\x45","\x1f","\xa3"),
	HX_HCSTRING("getBool","\xe0","\x33","\x9e","\x13"),
	HX_HCSTRING("getString","\x07","\xb2","\x86","\x8d"),
	HX_HCSTRING("getCall","\x54","\xc8","\x3c","\x14"),
	HX_HCSTRING("getVal","\xeb","\x17","\x29","\xa3"),
	HX_HCSTRING("getUnit","\x3a","\x7a","\x2c","\x20"),
	HX_HCSTRING("getVariant","\x8f","\xc6","\x43","\x2c"),
	HX_HCSTRING("mapIdent","\xb4","\xb2","\xbb","\x2e"),
	HX_HCSTRING("getIdent","\x7a","\x52","\x50","\x17"),
	HX_HCSTRING("getColAlpha","\xb4","\x71","\x93","\x2f"),
	HX_HCSTRING("getFill","\x39","\x7e","\x3e","\x16"),
	HX_HCSTRING("getCol","\x4a","\xb9","\x1a","\xa3"),
	HX_HCSTRING("getFontName","\x70","\x52","\x71","\xf1"),
	HX_HCSTRING("unexpected","\xd1","\x15","\xf4","\xc5"),
	HX_HCSTRING("expect","\xd9","\xed","\x75","\xc4"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("isToken","\xaf","\x26","\xb1","\xb0"),
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	HX_HCSTRING("valueStr","\xc0","\x5d","\x51","\xee"),
	HX_HCSTRING("parseStyle","\xfe","\xeb","\xfe","\xad"),
	HX_HCSTRING("parseRules","\xc4","\xaa","\x37","\x1b"),
	HX_HCSTRING("parseClasses","\xb3","\xa2","\x6b","\xc3"),
	HX_HCSTRING("readClasses","\xf0","\xe1","\x7c","\xbc"),
	HX_HCSTRING("updateClass","\x6f","\xe1","\xf0","\x2d"),
	HX_HCSTRING("readClass","\x02","\xc5","\x3f","\x19"),
	HX_HCSTRING("readIdent","\xba","\x8f","\x60","\x88"),
	HX_HCSTRING("readValue","\x3b","\xcc","\x9f","\x02"),
	HX_HCSTRING("readHex","\x25","\xe9","\xc8","\x02"),
	HX_HCSTRING("readValueUnit","\x5f","\xfc","\x9c","\x2d"),
	HX_HCSTRING("readValueNext","\xce","\xb6","\xf5","\x28"),
	HX_HCSTRING("loopNext","\x77","\x59","\x70","\x3b"),
	HX_HCSTRING("loopComma","\xd1","\x50","\x09","\x78"),
	HX_HCSTRING("isSpace","\x7c","\x30","\xec","\x1d"),
	HX_HCSTRING("isIdentChar","\x9c","\xbc","\x86","\x15"),
	HX_HCSTRING("isNum","\x7c","\x08","\x52","\xc1"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("readUrl","\xb9","\xd1","\xd2","\x02"),
	HX_HCSTRING("readToken","\xc3","\xcf","\x12","\xe5"),
	::String(null()) };

static void Parser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Parser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
};

#endif

hx::Class Parser_obj::__mClass;

void Parser_obj::__register()
{
	hx::Object *dummy = new Parser_obj;
	Parser_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.styles.Parser","\x79","\x33","\x20","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Parser_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Parser_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Parser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Parser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Parser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Parser_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
