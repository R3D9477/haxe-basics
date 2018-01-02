// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageDisplayBase
#include <haxe/ui/backend/ImageDisplayBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ImageDisplay
#include <haxe/ui/core/ImageDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Rectangle
#include <haxe/ui/util/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5f2f5f31431489cc_11_new,"haxe.ui.core.ImageDisplay","new",0x7e8cec56,"haxe.ui.core.ImageDisplay.new","haxe/ui/core/ImageDisplay.hx",11,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_23_get_left,"haxe.ui.core.ImageDisplay","get_left",0x191a8bda,"haxe.ui.core.ImageDisplay.get_left","haxe/ui/core/ImageDisplay.hx",23,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_25_set_left,"haxe.ui.core.ImageDisplay","set_left",0xc777e54e,"haxe.ui.core.ImageDisplay.set_left","haxe/ui/core/ImageDisplay.hx",25,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_37_get_top,"haxe.ui.core.ImageDisplay","get_top",0x2bc27e22,"haxe.ui.core.ImageDisplay.get_top","haxe/ui/core/ImageDisplay.hx",37,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_39_set_top,"haxe.ui.core.ImageDisplay","set_top",0x1ec40f2e,"haxe.ui.core.ImageDisplay.set_top","haxe/ui/core/ImageDisplay.hx",39,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_50_set_imageWidth,"haxe.ui.core.ImageDisplay","set_imageWidth",0x75300932,"haxe.ui.core.ImageDisplay.set_imageWidth","haxe/ui/core/ImageDisplay.hx",50,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_61_get_imageWidth,"haxe.ui.core.ImageDisplay","get_imageWidth",0x551020be,"haxe.ui.core.ImageDisplay.get_imageWidth","haxe/ui/core/ImageDisplay.hx",61,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_65_set_imageHeight,"haxe.ui.core.ImageDisplay","set_imageHeight",0xcb277b3b,"haxe.ui.core.ImageDisplay.set_imageHeight","haxe/ui/core/ImageDisplay.hx",65,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_76_get_imageHeight,"haxe.ui.core.ImageDisplay","get_imageHeight",0xcf5bfe2f,"haxe.ui.core.ImageDisplay.get_imageHeight","haxe/ui/core/ImageDisplay.hx",76,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_81_get_imageInfo,"haxe.ui.core.ImageDisplay","get_imageInfo",0x13d78cb6,"haxe.ui.core.ImageDisplay.get_imageInfo","haxe/ui/core/ImageDisplay.hx",81,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_83_set_imageInfo,"haxe.ui.core.ImageDisplay","set_imageInfo",0x58dd6ec2,"haxe.ui.core.ImageDisplay.set_imageInfo","haxe/ui/core/ImageDisplay.hx",83,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_99_get_imageClipRect,"haxe.ui.core.ImageDisplay","get_imageClipRect",0x821aa85c,"haxe.ui.core.ImageDisplay.get_imageClipRect","haxe/ui/core/ImageDisplay.hx",99,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_101_set_imageClipRect,"haxe.ui.core.ImageDisplay","set_imageClipRect",0xa5888068,"haxe.ui.core.ImageDisplay.set_imageClipRect","haxe/ui/core/ImageDisplay.hx",101,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_109_isInvalid,"haxe.ui.core.ImageDisplay","isInvalid",0x6765d0a3,"haxe.ui.core.ImageDisplay.isInvalid","haxe/ui/core/ImageDisplay.hx",109,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_126_invalidate,"haxe.ui.core.ImageDisplay","invalidate",0x7a940845,"haxe.ui.core.ImageDisplay.invalidate","haxe/ui/core/ImageDisplay.hx",126,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_135_validate,"haxe.ui.core.ImageDisplay","validate",0x569398e0,"haxe.ui.core.ImageDisplay.validate","haxe/ui/core/ImageDisplay.hx",135,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_153_handleValidate,"haxe.ui.core.ImageDisplay","handleValidate",0x5ba51428,"haxe.ui.core.ImageDisplay.handleValidate","haxe/ui/core/ImageDisplay.hx",153,0x68d1df99)
namespace haxe{
namespace ui{
namespace core{

void ImageDisplay_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_5f2f5f31431489cc_11_new)
HXLINE(  15)		this->_isValidating = false;
HXLINE(  14)		this->_isAllInvalid = false;
HXLINE(  13)		this->_invalidationFlags =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  18)		super::__construct();
            	}

Dynamic ImageDisplay_obj::__CreateEmpty() { return new ImageDisplay_obj; }

void *ImageDisplay_obj::_hx_vtable = 0;

Dynamic ImageDisplay_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ImageDisplay_obj > _hx_result = new ImageDisplay_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ImageDisplay_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x460e4968) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x460e4968;
	} else {
		return inClassId==(int)0x60e9e712;
	}
}

Float ImageDisplay_obj::get_left(){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_23_get_left)
HXDLIN(  23)		return this->_left;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDisplay_obj,get_left,return )

Float ImageDisplay_obj::set_left(Float value){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_25_set_left)
HXLINE(  26)		if ((value == this->_left)) {
HXLINE(  27)			return value;
            		}
HXLINE(  30)		this->_left = value;
HXLINE(  31)		this->invalidate(HX_("position",a9,a0,fa,ca));
HXLINE(  32)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageDisplay_obj,set_left,return )

Float ImageDisplay_obj::get_top(){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_37_get_top)
HXDLIN(  37)		return this->_top;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDisplay_obj,get_top,return )

Float ImageDisplay_obj::set_top(Float value){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_39_set_top)
HXLINE(  40)		if ((value == this->_top)) {
HXLINE(  41)			return value;
            		}
HXLINE(  44)		this->_top = value;
HXLINE(  45)		this->invalidate(HX_("position",a9,a0,fa,ca));
HXLINE(  46)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageDisplay_obj,set_top,return )

Float ImageDisplay_obj::set_imageWidth(Float value){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_50_set_imageWidth)
HXLINE(  51)		bool _hx_tmp;
HXDLIN(  51)		if ((this->_imageWidth != value)) {
HXLINE(  51)			_hx_tmp = (value <= (int)0);
            		}
            		else {
HXLINE(  51)			_hx_tmp = true;
            		}
HXDLIN(  51)		if (_hx_tmp) {
HXLINE(  52)			return value;
            		}
HXLINE(  55)		this->_imageWidth = value;
HXLINE(  56)		this->invalidate(HX_("display",42,2a,4a,bb));
HXLINE(  57)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageDisplay_obj,set_imageWidth,return )

Float ImageDisplay_obj::get_imageWidth(){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_61_get_imageWidth)
HXDLIN(  61)		return this->_imageWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDisplay_obj,get_imageWidth,return )

Float ImageDisplay_obj::set_imageHeight(Float value){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_65_set_imageHeight)
HXLINE(  66)		bool _hx_tmp;
HXDLIN(  66)		if ((this->_imageHeight != value)) {
HXLINE(  66)			_hx_tmp = (value <= (int)0);
            		}
            		else {
HXLINE(  66)			_hx_tmp = true;
            		}
HXDLIN(  66)		if (_hx_tmp) {
HXLINE(  67)			return value;
            		}
HXLINE(  70)		this->_imageHeight = value;
HXLINE(  71)		this->invalidate(HX_("display",42,2a,4a,bb));
HXLINE(  72)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageDisplay_obj,set_imageHeight,return )

Float ImageDisplay_obj::get_imageHeight(){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_76_get_imageHeight)
HXDLIN(  76)		return this->_imageHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDisplay_obj,get_imageHeight,return )

 ::Dynamic ImageDisplay_obj::get_imageInfo(){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_81_get_imageInfo)
HXDLIN(  81)		return this->_imageInfo;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDisplay_obj,get_imageInfo,return )

 ::Dynamic ImageDisplay_obj::set_imageInfo( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_83_set_imageInfo)
HXLINE(  84)		if (hx::IsEq( value,this->_imageInfo )) {
HXLINE(  85)			return value;
            		}
HXLINE(  88)		this->_imageInfo = value;
HXLINE(  89)		this->_imageWidth = ( (Float)(this->_imageInfo->__Field(HX_("width",06,b6,62,ca),hx::paccDynamic)) );
HXLINE(  90)		this->_imageHeight = ( (Float)(this->_imageInfo->__Field(HX_("height",e7,07,4c,02),hx::paccDynamic)) );
HXLINE(  91)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE(  92)		this->invalidate(HX_("display",42,2a,4a,bb));
HXLINE(  94)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageDisplay_obj,set_imageInfo,return )

 ::haxe::ui::util::Rectangle ImageDisplay_obj::get_imageClipRect(){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_99_get_imageClipRect)
HXDLIN(  99)		return this->_imageClipRect;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDisplay_obj,get_imageClipRect,return )

 ::haxe::ui::util::Rectangle ImageDisplay_obj::set_imageClipRect( ::haxe::ui::util::Rectangle value){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_101_set_imageClipRect)
HXLINE( 102)		this->_imageClipRect = value;
HXLINE( 103)		this->invalidate(HX_("display",42,2a,4a,bb));
HXLINE( 105)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageDisplay_obj,set_imageClipRect,return )

bool ImageDisplay_obj::isInvalid(::String __o_flag){
::String flag = __o_flag.Default(HX_HCSTRING("all","\x21","\xf9","\x49","\x00"));
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_109_isInvalid)
HXLINE( 110)		if ((this->_isAllInvalid == true)) {
HXLINE( 111)			return true;
            		}
HXLINE( 114)		if ((flag == HX_("all",21,f9,49,00))) {
HXLINE( 115)			{
HXLINE( 115)				 ::Dynamic value = this->_invalidationFlags->iterator();
HXDLIN( 115)				while(( (bool)(value->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 115)					bool value1 = ( (bool)(value->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 116)					return true;
            				}
            			}
HXLINE( 119)			return false;
            		}
HXLINE( 122)		return this->_invalidationFlags->exists(flag);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageDisplay_obj,isInvalid,return )

void ImageDisplay_obj::invalidate(::String __o_flag){
::String flag = __o_flag.Default(HX_HCSTRING("all","\x21","\xf9","\x49","\x00"));
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_126_invalidate)
HXDLIN( 126)		if ((flag == HX_("all",21,f9,49,00))) {
HXLINE( 127)			this->_isAllInvalid = true;
            		}
            		else {
HXLINE( 129)			bool _hx_tmp;
HXDLIN( 129)			if ((flag != HX_("all",21,f9,49,00))) {
HXLINE( 129)				_hx_tmp = !(this->_invalidationFlags->exists(flag));
            			}
            			else {
HXLINE( 129)				_hx_tmp = false;
            			}
HXDLIN( 129)			if (_hx_tmp) {
HXLINE( 130)				this->_invalidationFlags->set(flag,true);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageDisplay_obj,invalidate,(void))

void ImageDisplay_obj::validate(){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_135_validate)
HXLINE( 136)		bool _hx_tmp;
HXDLIN( 136)		if ((this->_isValidating != true)) {
HXLINE( 136)			_hx_tmp = (this->isInvalid(null()) == false);
            		}
            		else {
HXLINE( 136)			_hx_tmp = true;
            		}
HXDLIN( 136)		if (_hx_tmp) {
HXLINE( 138)			return;
            		}
HXLINE( 141)		this->_isValidating = true;
HXLINE( 143)		this->handleValidate();
HXLINE( 145)		{
HXLINE( 145)			 ::Dynamic flag = this->_invalidationFlags->keys();
HXDLIN( 145)			while(( (bool)(flag->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 145)				::String flag1 = ( (::String)(flag->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 146)				this->_invalidationFlags->remove(flag1);
            			}
            		}
HXLINE( 149)		this->_isAllInvalid = false;
HXLINE( 150)		this->_isValidating = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDisplay_obj,validate,(void))

void ImageDisplay_obj::handleValidate(){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_153_handleValidate)
HXLINE( 154)		bool dataInvalid = this->isInvalid(HX_("data",2a,56,63,42));
HXLINE( 155)		bool positionInvalid = this->isInvalid(HX_("position",a9,a0,fa,ca));
HXLINE( 156)		bool displayInvalid = this->isInvalid(HX_("display",42,2a,4a,bb));
HXLINE( 158)		if (dataInvalid) {
HXLINE( 159)			this->validateData();
            		}
HXLINE( 162)		if (positionInvalid) {
HXLINE( 163)			this->validatePosition();
            		}
HXLINE( 166)		if (displayInvalid) {
HXLINE( 167)			this->validateDisplay();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDisplay_obj,handleValidate,(void))


hx::ObjectPtr< ImageDisplay_obj > ImageDisplay_obj::__new() {
	hx::ObjectPtr< ImageDisplay_obj > __this = new ImageDisplay_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ImageDisplay_obj > ImageDisplay_obj::__alloc(hx::Ctx *_hx_ctx) {
	ImageDisplay_obj *__this = (ImageDisplay_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ImageDisplay_obj), true, "haxe.ui.core.ImageDisplay"));
	*(void **)__this = ImageDisplay_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ImageDisplay_obj::ImageDisplay_obj()
{
}

void ImageDisplay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageDisplay);
	HX_MARK_MEMBER_NAME(_invalidationFlags,"_invalidationFlags");
	HX_MARK_MEMBER_NAME(_isAllInvalid,"_isAllInvalid");
	HX_MARK_MEMBER_NAME(_isValidating,"_isValidating");
	 ::haxe::ui::backend::ImageDisplayBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ImageDisplay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_invalidationFlags,"_invalidationFlags");
	HX_VISIT_MEMBER_NAME(_isAllInvalid,"_isAllInvalid");
	HX_VISIT_MEMBER_NAME(_isValidating,"_isValidating");
	 ::haxe::ui::backend::ImageDisplayBase_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ImageDisplay_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_top() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_left() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_top") ) { return hx::Val( get_top_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return hx::Val( set_top_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_left") ) { return hx::Val( get_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return hx::Val( set_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"validate") ) { return hx::Val( validate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"imageInfo") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_imageInfo() ); }
		if (HX_FIELD_EQ(inName,"isInvalid") ) { return hx::Val( isInvalid_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imageWidth") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_imageWidth() ); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return hx::Val( invalidate_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imageHeight") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_imageHeight() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isAllInvalid") ) { return hx::Val( _isAllInvalid ); }
		if (HX_FIELD_EQ(inName,"_isValidating") ) { return hx::Val( _isValidating ); }
		if (HX_FIELD_EQ(inName,"get_imageInfo") ) { return hx::Val( get_imageInfo_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_imageInfo") ) { return hx::Val( set_imageInfo_dyn() ); }
		if (HX_FIELD_EQ(inName,"imageClipRect") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_imageClipRect() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_imageWidth") ) { return hx::Val( set_imageWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_imageWidth") ) { return hx::Val( get_imageWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleValidate") ) { return hx::Val( handleValidate_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_imageHeight") ) { return hx::Val( set_imageHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_imageHeight") ) { return hx::Val( get_imageHeight_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_imageClipRect") ) { return hx::Val( get_imageClipRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_imageClipRect") ) { return hx::Val( set_imageClipRect_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_invalidationFlags") ) { return hx::Val( _invalidationFlags ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ImageDisplay_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_top(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_left(inValue.Cast< Float >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"imageInfo") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_imageInfo(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imageWidth") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_imageWidth(inValue.Cast< Float >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imageHeight") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_imageHeight(inValue.Cast< Float >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isAllInvalid") ) { _isAllInvalid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isValidating") ) { _isValidating=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imageClipRect") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_imageClipRect(inValue.Cast<  ::haxe::ui::util::Rectangle >()) ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_invalidationFlags") ) { _invalidationFlags=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageDisplay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_invalidationFlags","\xca","\x12","\x21","\xcb"));
	outFields->push(HX_HCSTRING("_isAllInvalid","\x3f","\x9b","\x7e","\xb8"));
	outFields->push(HX_HCSTRING("_isValidating","\xbc","\xc6","\x7a","\x96"));
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("top","\x95","\x66","\x58","\x00"));
	outFields->push(HX_HCSTRING("imageWidth","\xab","\x7c","\x30","\xd6"));
	outFields->push(HX_HCSTRING("imageHeight","\xa2","\x11","\x8c","\x4a"));
	outFields->push(HX_HCSTRING("imageInfo","\x69","\xcd","\xef","\x27"));
	outFields->push(HX_HCSTRING("imageClipRect","\x8f","\xbe","\x0c","\x38"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ImageDisplay_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ImageDisplay_obj,_invalidationFlags),HX_HCSTRING("_invalidationFlags","\xca","\x12","\x21","\xcb")},
	{hx::fsBool,(int)offsetof(ImageDisplay_obj,_isAllInvalid),HX_HCSTRING("_isAllInvalid","\x3f","\x9b","\x7e","\xb8")},
	{hx::fsBool,(int)offsetof(ImageDisplay_obj,_isValidating),HX_HCSTRING("_isValidating","\xbc","\xc6","\x7a","\x96")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ImageDisplay_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageDisplay_obj_sMemberFields[] = {
	HX_HCSTRING("_invalidationFlags","\xca","\x12","\x21","\xcb"),
	HX_HCSTRING("_isAllInvalid","\x3f","\x9b","\x7e","\xb8"),
	HX_HCSTRING("_isValidating","\xbc","\xc6","\x7a","\x96"),
	HX_HCSTRING("get_left","\x90","\xc3","\x6a","\xc7"),
	HX_HCSTRING("set_left","\x04","\x1d","\xc8","\x75"),
	HX_HCSTRING("get_top","\x2c","\x2f","\xcd","\x26"),
	HX_HCSTRING("set_top","\x38","\xc0","\xce","\x19"),
	HX_HCSTRING("set_imageWidth","\x68","\xed","\x45","\x6c"),
	HX_HCSTRING("get_imageWidth","\xf4","\x04","\x26","\x4c"),
	HX_HCSTRING("set_imageHeight","\x45","\x46","\x39","\x07"),
	HX_HCSTRING("get_imageHeight","\x39","\xc9","\x6d","\x0b"),
	HX_HCSTRING("get_imageInfo","\x40","\xa1","\x53","\xe9"),
	HX_HCSTRING("set_imageInfo","\x4c","\x83","\x59","\x2e"),
	HX_HCSTRING("get_imageClipRect","\xe6","\xc9","\x7c","\x3e"),
	HX_HCSTRING("set_imageClipRect","\xf2","\xa1","\xea","\x61"),
	HX_HCSTRING("isInvalid","\x2d","\x58","\x46","\x3f"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("handleValidate","\x5e","\xf8","\xba","\x52"),
	::String(null()) };

static void ImageDisplay_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageDisplay_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ImageDisplay_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageDisplay_obj::__mClass,"__mClass");
};

#endif

hx::Class ImageDisplay_obj::__mClass;

void ImageDisplay_obj::__register()
{
	hx::Object *dummy = new ImageDisplay_obj;
	ImageDisplay_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.core.ImageDisplay","\x64","\xc9","\x26","\x36");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ImageDisplay_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ImageDisplay_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ImageDisplay_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ImageDisplay_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageDisplay_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageDisplay_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
