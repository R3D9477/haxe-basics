// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageDisplayBase
#include <haxe/ui/backend/ImageDisplayBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ImageLayout
#include <haxe/ui/components/ImageLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ImageDisplay
#include <haxe/ui/core/ImageDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Rectangle
#include <haxe/ui/util/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Size
#include <haxe/ui/util/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d5e06d626c6d1292_133_new,"haxe.ui.components.ImageLayout","new",0x74af5df1,"haxe.ui.components.ImageLayout.new","haxe/ui/components/Image.hx",133,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_d5e06d626c6d1292_136_get_imageScaleMode,"haxe.ui.components.ImageLayout","get_imageScaleMode",0x98a6968a,"haxe.ui.components.ImageLayout.get_imageScaleMode","haxe/ui/components/Image.hx",136,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_d5e06d626c6d1292_141_get_imageHorizontalAlign,"haxe.ui.components.ImageLayout","get_imageHorizontalAlign",0x4673867e,"haxe.ui.components.ImageLayout.get_imageHorizontalAlign","haxe/ui/components/Image.hx",141,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_d5e06d626c6d1292_146_get_imageVerticalAlign,"haxe.ui.components.ImageLayout","get_imageVerticalAlign",0x09dedc6c,"haxe.ui.components.ImageLayout.get_imageVerticalAlign","haxe/ui/components/Image.hx",146,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_d5e06d626c6d1292_150_resizeChildren,"haxe.ui.components.ImageLayout","resizeChildren",0x7182ed62,"haxe.ui.components.ImageLayout.resizeChildren","haxe/ui/components/Image.hx",150,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_d5e06d626c6d1292_194_repositionChildren,"haxe.ui.components.ImageLayout","repositionChildren",0x9fb95e4a,"haxe.ui.components.ImageLayout.repositionChildren","haxe/ui/components/Image.hx",194,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_d5e06d626c6d1292_224_calcAutoSize,"haxe.ui.components.ImageLayout","calcAutoSize",0x93b839d4,"haxe.ui.components.ImageLayout.calcAutoSize","haxe/ui/components/Image.hx",224,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_d5e06d626c6d1292_233_updateClipRect,"haxe.ui.components.ImageLayout","updateClipRect",0x3de72d4c,"haxe.ui.components.ImageLayout.updateClipRect","haxe/ui/components/Image.hx",233,0xeed4974a)
namespace haxe{
namespace ui{
namespace components{

void ImageLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d5e06d626c6d1292_133_new)
HXDLIN( 133)		super::__construct();
            	}

Dynamic ImageLayout_obj::__CreateEmpty() { return new ImageLayout_obj; }

void *ImageLayout_obj::_hx_vtable = 0;

Dynamic ImageLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ImageLayout_obj > _hx_result = new ImageLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ImageLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x573d1c75) {
		if (inClassId<=(int)0x548a03f5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x548a03f5;
		} else {
			return inClassId==(int)0x573d1c75;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

::String ImageLayout_obj::get_imageScaleMode(){
            	HX_STACKFRAME(&_hx_pos_d5e06d626c6d1292_136_get_imageScaleMode)
HXDLIN( 136)		return hx::TCast<  ::haxe::ui::components::Image >::cast(this->_component)->get_scaleMode();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageLayout_obj,get_imageScaleMode,return )

::String ImageLayout_obj::get_imageHorizontalAlign(){
            	HX_STACKFRAME(&_hx_pos_d5e06d626c6d1292_141_get_imageHorizontalAlign)
HXDLIN( 141)		return hx::TCast<  ::haxe::ui::components::Image >::cast(this->_component)->get_imageHorizontalAlign();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageLayout_obj,get_imageHorizontalAlign,return )

::String ImageLayout_obj::get_imageVerticalAlign(){
            	HX_STACKFRAME(&_hx_pos_d5e06d626c6d1292_146_get_imageVerticalAlign)
HXDLIN( 146)		return hx::TCast<  ::haxe::ui::components::Image >::cast(this->_component)->get_imageVerticalAlign();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageLayout_obj,get_imageVerticalAlign,return )

void ImageLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_d5e06d626c6d1292_150_resizeChildren)
HXDLIN( 150)		if (this->get_component()->hasImageDisplay()) {
HXLINE( 151)			 ::haxe::ui::util::Size usz = this->get_usableSize();
HXLINE( 152)			 ::haxe::ui::components::Image image = ( ( ::haxe::ui::components::Image)(this->_component) );
HXLINE( 153)			 ::haxe::ui::core::ImageDisplay imageDisplay = image->getImageDisplay();
HXLINE( 154)			Float maxWidth = this->get_usableSize()->width;
HXLINE( 155)			Float maxHeight = this->get_usableSize()->height;
HXLINE( 156)			if ((this->get_component()->get_autoWidth() == true)) {
HXLINE( 157)				maxWidth = (int)-1;
            			}
HXLINE( 160)			if ((this->_component->get_autoHeight() == true)) {
HXLINE( 161)				maxHeight = (int)-1;
            			}
HXLINE( 164)			Float scaleW;
HXDLIN( 164)			if ((maxWidth != (int)-1)) {
HXLINE( 164)				scaleW = ((Float)maxWidth / (Float)image->_originalSize->width);
            			}
            			else {
HXLINE( 164)				scaleW = (int)1;
            			}
HXLINE( 165)			Float scaleH;
HXDLIN( 165)			if ((maxHeight != (int)-1)) {
HXLINE( 165)				scaleH = ((Float)maxHeight / (Float)image->_originalSize->height);
            			}
            			else {
HXLINE( 165)				scaleH = (int)1;
            			}
HXLINE( 167)			if ((this->get_imageScaleMode() != HX_("fill",83,ce,bb,43))) {
HXLINE( 168)				Float scale;
HXLINE( 169)				{
HXLINE( 169)					::String _g = this->get_imageScaleMode();
HXDLIN( 169)					::String _hx_switch_0 = _g;
            					if (  (_hx_switch_0==HX_("fitheight",78,7c,e6,5b)) ){
HXLINE( 177)						scale = scaleH;
HXDLIN( 177)						goto _hx_goto_4;
            					}
            					if (  (_hx_switch_0==HX_("fitinside",8d,b4,7a,f7)) ){
HXLINE( 171)						if ((scaleW < scaleH)) {
HXLINE( 171)							scale = scaleW;
            						}
            						else {
HXLINE( 171)							scale = scaleH;
            						}
HXDLIN( 171)						goto _hx_goto_4;
            					}
            					if (  (_hx_switch_0==HX_("fitoutside",74,17,ea,f3)) ){
HXLINE( 173)						if ((scaleW > scaleH)) {
HXLINE( 173)							scale = scaleW;
            						}
            						else {
HXLINE( 173)							scale = scaleH;
            						}
HXDLIN( 173)						goto _hx_goto_4;
            					}
            					if (  (_hx_switch_0==HX_("fitwidth",95,be,2f,04)) ){
HXLINE( 175)						scale = scaleW;
HXDLIN( 175)						goto _hx_goto_4;
            					}
            					/* default */{
HXLINE( 179)						scale = (int)1;
            					}
            					_hx_goto_4:;
            				}
HXLINE( 182)				imageDisplay->set_imageWidth((image->_originalSize->width * scale));
HXLINE( 183)				imageDisplay->set_imageHeight((image->_originalSize->height * scale));
            			}
            			else {
HXLINE( 185)				imageDisplay->set_imageWidth((image->_originalSize->width * scaleW));
HXLINE( 186)				imageDisplay->set_imageHeight((image->_originalSize->height * scaleH));
            			}
HXLINE( 189)			this->updateClipRect(usz);
            		}
            	}


void ImageLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_d5e06d626c6d1292_194_repositionChildren)
HXDLIN( 194)		if (this->get_component()->hasImageDisplay()) {
HXLINE( 195)			 ::haxe::ui::components::Image image = ( ( ::haxe::ui::components::Image)(this->_component) );
HXLINE( 196)			 ::haxe::ui::core::ImageDisplay imageDisplay = this->_component->getImageDisplay();
HXLINE( 198)			{
HXLINE( 198)				::String _g = image->get_imageHorizontalAlign();
HXDLIN( 198)				::String _hx_switch_0 = _g;
            				if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 200)					 ::Dynamic _hx_tmp = this->_component->get_componentWidth();
HXDLIN( 200)					imageDisplay->set_left(((Float)(_hx_tmp - imageDisplay->get_imageWidth()) / (Float)(int)2));
HXDLIN( 200)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE( 206)					imageDisplay->set_left(this->get_paddingLeft());
HXDLIN( 206)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 203)					 ::Dynamic _hx_tmp1 = this->_component->get_componentWidth();
HXDLIN( 203)					Float _hx_tmp2 = (_hx_tmp1 - imageDisplay->get_imageWidth());
HXDLIN( 203)					imageDisplay->set_left((_hx_tmp2 - this->get_paddingRight()));
HXDLIN( 203)					goto _hx_goto_6;
            				}
            				_hx_goto_6:;
            			}
HXLINE( 209)			{
HXLINE( 209)				::String _g1 = image->get_imageVerticalAlign();
HXDLIN( 209)				::String _hx_switch_1 = _g1;
            				if (  (_hx_switch_1==HX_("bottom",eb,e6,78,65)) ){
HXLINE( 214)					 ::Dynamic _hx_tmp3 = this->_component->get_componentHeight();
HXDLIN( 214)					Float _hx_tmp4 = (_hx_tmp3 - imageDisplay->get_imageHeight());
HXDLIN( 214)					imageDisplay->set_top((_hx_tmp4 - this->get_paddingBottom()));
HXDLIN( 214)					goto _hx_goto_7;
            				}
            				if (  (_hx_switch_1==HX_("center",d5,25,db,05)) ){
HXLINE( 211)					 ::Dynamic _hx_tmp5 = this->_component->get_componentHeight();
HXDLIN( 211)					imageDisplay->set_top(((Float)(_hx_tmp5 - imageDisplay->get_imageHeight()) / (Float)(int)2));
HXDLIN( 211)					goto _hx_goto_7;
            				}
            				if (  (_hx_switch_1==HX_("top",95,66,58,00)) ){
HXLINE( 217)					imageDisplay->set_top(this->get_paddingTop());
HXDLIN( 217)					goto _hx_goto_7;
            				}
            				_hx_goto_7:;
            			}
HXLINE( 220)			this->updateClipRect(this->get_usableSize());
            		}
            	}


 ::haxe::ui::util::Size ImageLayout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_d5e06d626c6d1292_224_calcAutoSize)
HXLINE( 225)		 ::haxe::ui::util::Size size = this->super::calcAutoSize(exclusions);
HXLINE( 226)		if (this->get_component()->hasImageDisplay()) {
HXLINE( 227)			 ::haxe::ui::util::Size size1 = size;
HXDLIN( 227)			Float size2 = size1->width;
HXDLIN( 227)			size1->width = (size2 + this->get_component()->getImageDisplay()->get_imageWidth());
HXLINE( 228)			 ::haxe::ui::util::Size size3 = size;
HXDLIN( 228)			Float size4 = size3->height;
HXDLIN( 228)			size3->height = (size4 + this->get_component()->getImageDisplay()->get_imageHeight());
            		}
HXLINE( 230)		return size;
            	}


void ImageLayout_obj::updateClipRect( ::haxe::ui::util::Size usz){
            	HX_GC_STACKFRAME(&_hx_pos_d5e06d626c6d1292_233_updateClipRect)
HXLINE( 234)		 ::haxe::ui::core::ImageDisplay imageDisplay = this->_component->getImageDisplay();
HXLINE( 235)		 ::haxe::ui::util::Rectangle rc = imageDisplay->get_imageClipRect();
HXLINE( 236)		if (hx::IsNull( rc )) {
HXLINE( 237)			rc =  ::haxe::ui::util::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 239)		bool _hx_tmp;
HXDLIN( 239)		Float _hx_tmp1 = imageDisplay->get_imageWidth();
HXDLIN( 239)		if (!((_hx_tmp1 > usz->width))) {
HXLINE( 240)			Float _hx_tmp2 = imageDisplay->get_imageHeight();
HXLINE( 239)			_hx_tmp = (_hx_tmp2 > usz->height);
            		}
            		else {
HXLINE( 239)			_hx_tmp = true;
            		}
HXDLIN( 239)		if (_hx_tmp) {
HXLINE( 241)			rc->top = this->get_paddingLeft();
HXLINE( 242)			rc->left = this->get_paddingTop();
HXLINE( 243)			rc->width = usz->width;
HXLINE( 244)			rc->height = usz->height;
            		}
            		else {
HXLINE( 246)			rc = null();
            		}
HXLINE( 249)		imageDisplay->set_imageClipRect(rc);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageLayout_obj,updateClipRect,(void))


hx::ObjectPtr< ImageLayout_obj > ImageLayout_obj::__new() {
	hx::ObjectPtr< ImageLayout_obj > __this = new ImageLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ImageLayout_obj > ImageLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	ImageLayout_obj *__this = (ImageLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ImageLayout_obj), true, "haxe.ui.components.ImageLayout"));
	*(void **)__this = ImageLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ImageLayout_obj::ImageLayout_obj()
{
}

hx::Val ImageLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return hx::Val( calcAutoSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"imageScaleMode") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_imageScaleMode() ); }
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateClipRect") ) { return hx::Val( updateClipRect_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_imageScaleMode") ) { return hx::Val( get_imageScaleMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"imageVerticalAlign") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_imageVerticalAlign() ); }
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"imageHorizontalAlign") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_imageHorizontalAlign() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_imageVerticalAlign") ) { return hx::Val( get_imageVerticalAlign_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_imageHorizontalAlign") ) { return hx::Val( get_imageHorizontalAlign_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

void ImageLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("imageScaleMode","\x32","\x58","\x1a","\xfa"));
	outFields->push(HX_HCSTRING("imageHorizontalAlign","\x26","\xf6","\xc3","\xb8"));
	outFields->push(HX_HCSTRING("imageVerticalAlign","\x14","\x92","\x18","\xb2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ImageLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ImageLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageLayout_obj_sMemberFields[] = {
	HX_HCSTRING("get_imageScaleMode","\xfb","\x38","\xb4","\x95"),
	HX_HCSTRING("get_imageHorizontalAlign","\xaf","\x13","\x60","\xfb"),
	HX_HCSTRING("get_imageVerticalAlign","\x5d","\x0b","\xad","\x0b"),
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("calcAutoSize","\x85","\x81","\x3f","\xfd"),
	HX_HCSTRING("updateClipRect","\x3d","\x83","\x94","\x8d"),
	::String(null()) };

static void ImageLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ImageLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class ImageLayout_obj::__mClass;

void ImageLayout_obj::__register()
{
	hx::Object *dummy = new ImageLayout_obj;
	ImageLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.ImageLayout","\x7f","\x91","\x73","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ImageLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ImageLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ImageLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ImageLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
