// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_ToolkitAssets
#include <haxe/ui/ToolkitAssets.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageDisplayBase
#include <haxe/ui/backend/ImageDisplayBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ImageDefaultResourceBehaviour
#include <haxe/ui/components/ImageDefaultResourceBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Behaviour
#include <haxe/ui/core/Behaviour.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Size
#include <haxe/ui/util/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3cb9eb9785a20eb5_258_new,"haxe.ui.components.ImageDefaultResourceBehaviour","new",0xcce55415,"haxe.ui.components.ImageDefaultResourceBehaviour.new","haxe/ui/components/Image.hx",258,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_3cb9eb9785a20eb5_261_set,"haxe.ui.components.ImageDefaultResourceBehaviour","set",0xcce91f57,"haxe.ui.components.ImageDefaultResourceBehaviour.set","haxe/ui/components/Image.hx",261,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_3cb9eb9785a20eb5_281_set,"haxe.ui.components.ImageDefaultResourceBehaviour","set",0xcce91f57,"haxe.ui.components.ImageDefaultResourceBehaviour.set","haxe/ui/components/Image.hx",281,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_3cb9eb9785a20eb5_300_getDynamic,"haxe.ui.components.ImageDefaultResourceBehaviour","getDynamic",0x1e16b274,"haxe.ui.components.ImageDefaultResourceBehaviour.getDynamic","haxe/ui/components/Image.hx",300,0xeed4974a)
namespace haxe{
namespace ui{
namespace components{

void ImageDefaultResourceBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_3cb9eb9785a20eb5_258_new)
HXDLIN( 258)		super::__construct(component);
            	}

Dynamic ImageDefaultResourceBehaviour_obj::__CreateEmpty() { return new ImageDefaultResourceBehaviour_obj; }

void *ImageDefaultResourceBehaviour_obj::_hx_vtable = 0;

Dynamic ImageDefaultResourceBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ImageDefaultResourceBehaviour_obj > _hx_result = new ImageDefaultResourceBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ImageDefaultResourceBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
	} else {
		return inClassId==(int)0x3ba82619;
	}
}

void ImageDefaultResourceBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_3cb9eb9785a20eb5_261_set)
HXLINE( 262)		if (hx::IsEq( this->_value,value )) {
HXLINE( 263)			return;
            		}
HXLINE( 266)		this->_value = value;
HXLINE( 268)		 ::haxe::ui::components::Image image = ( ( ::haxe::ui::components::Image)(this->_component) );
HXLINE( 270)		bool _hx_tmp;
HXDLIN( 270)		bool _hx_tmp1;
HXDLIN( 270)		if (hx::IsNotNull( value )) {
HXLINE( 270)			_hx_tmp1 = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value);
            		}
            		else {
HXLINE( 270)			_hx_tmp1 = true;
            		}
HXDLIN( 270)		if (!(_hx_tmp1)) {
HXLINE( 270)			_hx_tmp = (::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value) == HX_("null",87,9e,0e,49));
            		}
            		else {
HXLINE( 270)			_hx_tmp = true;
            		}
HXDLIN( 270)		if (_hx_tmp) {
HXLINE( 271)			image->removeImageDisplay();
HXLINE( 272)			return;
            		}
HXLINE( 275)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isString(value)) {
HXLINE( 276)			::String resource = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value);
HXLINE( 277)			if (!(::StringTools_obj::startsWith(resource,HX_("http://",52,75,cd,5a)))) {
            				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::Image,image) HXARGC(1)
            				void _hx_run( ::Dynamic imageInfo){
            					HX_GC_STACKFRAME(&_hx_pos_3cb9eb9785a20eb5_281_set)
HXLINE( 281)					if (hx::IsNotNull( imageInfo )) {
HXLINE( 282)						 ::haxe::ui::core::ImageDisplay display = image->getImageDisplay();
HXLINE( 283)						if (hx::IsNotNull( display )) {
HXLINE( 284)							display->set_imageInfo(imageInfo);
HXLINE( 285)							image->_originalSize =  ::haxe::ui::util::Size_obj::__alloc( HX_CTX , ::Dynamic(imageInfo->__Field(HX_("width",06,b6,62,ca),hx::paccDynamic)), ::Dynamic(imageInfo->__Field(HX_("height",e7,07,4c,02),hx::paccDynamic)));
HXLINE( 286)							bool _hx_tmp2;
HXDLIN( 286)							if ((image->autoSize() == true)) {
HXLINE( 286)								_hx_tmp2 = hx::IsNotNull( image->parentComponent );
            							}
            							else {
HXLINE( 286)								_hx_tmp2 = false;
            							}
HXDLIN( 286)							if (_hx_tmp2) {
HXLINE( 287)								 ::haxe::ui::core::Component _this = image->parentComponent;
HXDLIN( 287)								bool _hx_tmp3;
HXDLIN( 287)								if (hx::IsNotNull( _this->_layout )) {
HXLINE( 287)									_hx_tmp3 = (_this->_layoutLocked == true);
            								}
            								else {
HXLINE( 287)									_hx_tmp3 = true;
            								}
HXDLIN( 287)								if (!(_hx_tmp3)) {
HXLINE( 287)									_this->invalidate(HX_("layout",aa,ae,b8,58));
            								}
            							}
HXLINE( 289)							image->validateLayout();
HXLINE( 290)							display->validate();
            						}
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 280)				::haxe::ui::Toolkit_obj::get_assets()->getImage(resource, ::Dynamic(new _hx_Closure_0(image)),null());
            			}
            		}
            	}


 ::Dynamic ImageDefaultResourceBehaviour_obj::getDynamic(){
            	HX_STACKFRAME(&_hx_pos_3cb9eb9785a20eb5_300_getDynamic)
HXDLIN( 300)		return this->_value;
            	}



hx::ObjectPtr< ImageDefaultResourceBehaviour_obj > ImageDefaultResourceBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ImageDefaultResourceBehaviour_obj > __this = new ImageDefaultResourceBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ImageDefaultResourceBehaviour_obj > ImageDefaultResourceBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ImageDefaultResourceBehaviour_obj *__this = (ImageDefaultResourceBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ImageDefaultResourceBehaviour_obj), true, "haxe.ui.components.ImageDefaultResourceBehaviour"));
	*(void **)__this = ImageDefaultResourceBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ImageDefaultResourceBehaviour_obj::ImageDefaultResourceBehaviour_obj()
{
}

void ImageDefaultResourceBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageDefaultResourceBehaviour);
	HX_MARK_MEMBER_NAME(_value,"_value");
	 ::haxe::ui::core::Behaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ImageDefaultResourceBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_value,"_value");
	 ::haxe::ui::core::Behaviour_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ImageDefaultResourceBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { return hx::Val( _value ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getDynamic") ) { return hx::Val( getDynamic_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ImageDefaultResourceBehaviour_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageDefaultResourceBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ImageDefaultResourceBehaviour_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageDefaultResourceBehaviour_obj,_value),HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ImageDefaultResourceBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageDefaultResourceBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("getDynamic","\x89","\x25","\x77","\x85"),
	::String(null()) };

static void ImageDefaultResourceBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageDefaultResourceBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ImageDefaultResourceBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageDefaultResourceBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class ImageDefaultResourceBehaviour_obj::__mClass;

void ImageDefaultResourceBehaviour_obj::__register()
{
	hx::Object *dummy = new ImageDefaultResourceBehaviour_obj;
	ImageDefaultResourceBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.ImageDefaultResourceBehaviour","\xa3","\xa5","\x22","\x7d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ImageDefaultResourceBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ImageDefaultResourceBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ImageDefaultResourceBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ImageDefaultResourceBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageDefaultResourceBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageDefaultResourceBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
