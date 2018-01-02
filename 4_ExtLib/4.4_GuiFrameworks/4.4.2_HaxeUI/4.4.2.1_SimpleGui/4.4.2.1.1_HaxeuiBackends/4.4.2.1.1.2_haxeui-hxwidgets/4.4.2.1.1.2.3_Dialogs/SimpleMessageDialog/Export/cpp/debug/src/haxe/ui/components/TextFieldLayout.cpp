// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayBase
#include <haxe/ui/backend/TextDisplayBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputBase
#include <haxe/ui/backend/TextInputBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextFieldLayout
#include <haxe/ui/components/TextFieldLayout.h>
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
#ifndef INCLUDED_haxe_ui_core_TextInput
#include <haxe/ui/core/TextInput.h>
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
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Size
#include <haxe/ui/util/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5cd78972d84522bf_400_new,"haxe.ui.components.TextFieldLayout","new",0x01257ae3,"haxe.ui.components.TextFieldLayout.new","haxe/ui/components/TextField.hx",400,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_5cd78972d84522bf_402_get_iconPosition,"haxe.ui.components.TextFieldLayout","get_iconPosition",0x43759168,"haxe.ui.components.TextFieldLayout.get_iconPosition","haxe/ui/components/TextField.hx",402,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_5cd78972d84522bf_409_repositionChildren,"haxe.ui.components.TextFieldLayout","repositionChildren",0x1809a198,"haxe.ui.components.TextFieldLayout.repositionChildren","haxe/ui/components/TextField.hx",409,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_5cd78972d84522bf_431_resizeChildren,"haxe.ui.components.TextFieldLayout","resizeChildren",0x03bff1b0,"haxe.ui.components.TextFieldLayout.resizeChildren","haxe/ui/components/TextField.hx",431,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_5cd78972d84522bf_444_calcAutoSize,"haxe.ui.components.TextFieldLayout","calcAutoSize",0xb403eea2,"haxe.ui.components.TextFieldLayout.calcAutoSize","haxe/ui/components/TextField.hx",444,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_5cd78972d84522bf_458_get_usableSize,"haxe.ui.components.TextFieldLayout","get_usableSize",0x81853a7f,"haxe.ui.components.TextFieldLayout.get_usableSize","haxe/ui/components/TextField.hx",458,0x9dfe9498)
namespace haxe{
namespace ui{
namespace components{

void TextFieldLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5cd78972d84522bf_400_new)
HXDLIN( 400)		super::__construct();
            	}

Dynamic TextFieldLayout_obj::__CreateEmpty() { return new TextFieldLayout_obj; }

void *TextFieldLayout_obj::_hx_vtable = 0;

Dynamic TextFieldLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextFieldLayout_obj > _hx_result = new TextFieldLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextFieldLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x652c3c60) {
		if (inClassId<=(int)0x548a03f5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x548a03f5;
		} else {
			return inClassId==(int)0x652c3c60;
		}
	} else {
		return inClassId==(int)0x7fa10b67;
	}
}

::String TextFieldLayout_obj::get_iconPosition(){
            	HX_STACKFRAME(&_hx_pos_5cd78972d84522bf_402_get_iconPosition)
HXLINE( 403)		if (hx::IsNull( this->get_component()->get_style()->iconPosition )) {
HXLINE( 404)			return HX_("left",07,08,b0,47);
            		}
HXLINE( 406)		return this->get_component()->get_style()->iconPosition;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFieldLayout_obj,get_iconPosition,return )

void TextFieldLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_5cd78972d84522bf_409_repositionChildren)
HXLINE( 411)		 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("textfield-icon",19,52,0f,5b),null(),null(),null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 412)		Float xpos = this->get_paddingLeft();
HXLINE( 413)		if (hx::IsNotNull( icon )) {
HXLINE( 414)			::String _g = this->get_iconPosition();
HXDLIN( 414)			::String _hx_switch_0 = _g;
            			if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE( 416)				icon->set_left(xpos);
HXLINE( 417)				Float _hx_tmp = ((Float)this->get_component()->get_componentHeight() / (Float)(int)2);
HXDLIN( 417)				icon->set_top((_hx_tmp - ((Float)icon->get_componentHeight() / (Float)(int)2)));
HXLINE( 418)				 ::Dynamic xpos1 = icon->get_componentWidth();
HXDLIN( 418)				xpos = (xpos + (xpos1 + this->get_horizontalSpacing()));
HXLINE( 415)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 420)				 ::Dynamic _hx_tmp1 = this->get_component()->get_componentWidth();
HXDLIN( 420)				Float _hx_tmp2 = (_hx_tmp1 - icon->get_componentWidth());
HXDLIN( 420)				icon->set_left((_hx_tmp2 - this->get_paddingRight()));
HXLINE( 421)				Float _hx_tmp3 = ((Float)this->get_component()->get_componentHeight() / (Float)(int)2);
HXDLIN( 421)				icon->set_top((_hx_tmp3 - ((Float)icon->get_componentHeight() / (Float)(int)2)));
HXLINE( 419)				goto _hx_goto_2;
            			}
            			_hx_goto_2:;
            		}
HXLINE( 425)		if ((this->get_component()->hasTextInput() == true)) {
HXLINE( 426)			this->get_component()->getTextInput()->set_left(xpos);
HXLINE( 427)			 ::haxe::ui::core::TextInput _hx_tmp4 = this->get_component()->getTextInput();
HXDLIN( 427)			_hx_tmp4->set_top(this->get_paddingTop());
            		}
            	}


void TextFieldLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_5cd78972d84522bf_431_resizeChildren)
HXLINE( 432)		this->super::resizeChildren();
HXLINE( 434)		if ((this->get_component()->hasTextInput() == true)) {
HXLINE( 435)			 ::haxe::ui::util::Size size = this->get_usableSize();
HXLINE( 437)			this->get_component()->getTextInput()->set_width(size->width);
HXLINE( 438)			this->get_component()->getTextInput()->set_height(size->height);
            		}
            	}


 ::haxe::ui::util::Size TextFieldLayout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_5cd78972d84522bf_444_calcAutoSize)
HXLINE( 445)		 ::haxe::ui::util::Size size = this->super::calcAutoSize(exclusions);
HXLINE( 446)		if ((this->get_component()->hasTextInput() == true)) {
HXLINE( 447)			Float _hx_tmp = this->get_component()->getTextInput()->get_textWidth();
HXDLIN( 447)			Float _hx_tmp1 = (_hx_tmp + this->get_paddingLeft());
HXDLIN( 447)			Float _hx_tmp2 = (_hx_tmp1 + this->get_paddingRight());
HXDLIN( 447)			if ((_hx_tmp2 > size->width)) {
HXLINE( 448)				Float _hx_tmp3 = this->get_component()->getTextInput()->get_textWidth();
HXDLIN( 448)				Float _hx_tmp4 = (_hx_tmp3 + this->get_paddingLeft());
HXDLIN( 448)				size->width = (_hx_tmp4 + this->get_paddingRight());
            			}
HXLINE( 450)			Float _hx_tmp5 = this->get_component()->getTextInput()->get_textHeight();
HXDLIN( 450)			Float _hx_tmp6 = (_hx_tmp5 + this->get_paddingTop());
HXDLIN( 450)			Float _hx_tmp7 = (_hx_tmp6 + this->get_paddingBottom());
HXDLIN( 450)			if ((_hx_tmp7 > size->height)) {
HXLINE( 451)				Float _hx_tmp8 = this->get_component()->getTextInput()->get_textHeight();
HXDLIN( 451)				Float _hx_tmp9 = (_hx_tmp8 + this->get_paddingTop());
HXDLIN( 451)				size->height = (_hx_tmp9 + this->get_paddingBottom());
            			}
            		}
HXLINE( 455)		return size;
            	}


 ::haxe::ui::util::Size TextFieldLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_5cd78972d84522bf_458_get_usableSize)
HXLINE( 459)		 ::haxe::ui::util::Size size = this->super::get_usableSize();
HXLINE( 460)		 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("textfield-icon",19,52,0f,5b),null(),null(),null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 461)		if (hx::IsNotNull( icon )) {
HXLINE( 462)			 ::haxe::ui::util::Size size1 = size;
HXDLIN( 462)			Float size2 = size1->width;
HXDLIN( 462)			 ::Dynamic _hx_tmp = icon->get_componentWidth();
HXDLIN( 462)			size1->width = (size2 - (_hx_tmp + this->get_horizontalSpacing()));
            		}
HXLINE( 464)		return size;
            	}



hx::ObjectPtr< TextFieldLayout_obj > TextFieldLayout_obj::__new() {
	hx::ObjectPtr< TextFieldLayout_obj > __this = new TextFieldLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< TextFieldLayout_obj > TextFieldLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	TextFieldLayout_obj *__this = (TextFieldLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextFieldLayout_obj), true, "haxe.ui.components.TextFieldLayout"));
	*(void **)__this = TextFieldLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextFieldLayout_obj::TextFieldLayout_obj()
{
}

void TextFieldLayout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextFieldLayout);
	HX_MARK_MEMBER_NAME(iconPosition,"iconPosition");
	 ::haxe::ui::layouts::Layout_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextFieldLayout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(iconPosition,"iconPosition");
	 ::haxe::ui::layouts::Layout_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TextFieldLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"iconPosition") ) { return hx::Val( inCallProp == hx::paccAlways ? get_iconPosition() : iconPosition ); }
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return hx::Val( calcAutoSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return hx::Val( get_usableSize_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_iconPosition") ) { return hx::Val( get_iconPosition_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TextFieldLayout_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"iconPosition") ) { iconPosition=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextFieldLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("iconPosition","\x42","\xe5","\x38","\x76"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TextFieldLayout_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TextFieldLayout_obj,iconPosition),HX_HCSTRING("iconPosition","\x42","\xe5","\x38","\x76")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TextFieldLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String TextFieldLayout_obj_sMemberFields[] = {
	HX_HCSTRING("iconPosition","\x42","\xe5","\x38","\x76"),
	HX_HCSTRING("get_iconPosition","\xcb","\xd1","\xd7","\x7a"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("calcAutoSize","\x85","\x81","\x3f","\xfd"),
	HX_HCSTRING("get_usableSize","\x22","\x8c","\xf5","\x3e"),
	::String(null()) };

static void TextFieldLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFieldLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextFieldLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFieldLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class TextFieldLayout_obj::__mClass;

void TextFieldLayout_obj::__register()
{
	hx::Object *dummy = new TextFieldLayout_obj;
	TextFieldLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.TextFieldLayout","\x71","\xcd","\xb7","\x05");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextFieldLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextFieldLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextFieldLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextFieldLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextFieldLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextFieldLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
