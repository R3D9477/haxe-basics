// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayBase
#include <haxe/ui/backend/TextDisplayBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_LabelLayout
#include <haxe/ui/components/LabelLayout.h>
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
#ifndef INCLUDED_haxe_ui_core_TextDisplay
#include <haxe/ui/core/TextDisplay.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_bdd5c070733c0f7e_78_new,"haxe.ui.components.LabelLayout","new",0x5bd8e5ca,"haxe.ui.components.LabelLayout.new","haxe/ui/components/Label.hx",78,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_bdd5c070733c0f7e_79_resizeChildren,"haxe.ui.components.LabelLayout","resizeChildren",0x270cb229,"haxe.ui.components.LabelLayout.resizeChildren","haxe/ui/components/Label.hx",79,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_bdd5c070733c0f7e_101_repositionChildren,"haxe.ui.components.LabelLayout","repositionChildren",0x6c329291,"haxe.ui.components.LabelLayout.repositionChildren","haxe/ui/components/Label.hx",101,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_bdd5c070733c0f7e_107_calcAutoSize,"haxe.ui.components.LabelLayout","calcAutoSize",0x43c56edb,"haxe.ui.components.LabelLayout.calcAutoSize","haxe/ui/components/Label.hx",107,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_bdd5c070733c0f7e_116_textAlign,"haxe.ui.components.LabelLayout","textAlign",0x8264e7c2,"haxe.ui.components.LabelLayout.textAlign","haxe/ui/components/Label.hx",116,0xeb990e51)
namespace haxe{
namespace ui{
namespace components{

void LabelLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_bdd5c070733c0f7e_78_new)
HXDLIN(  78)		super::__construct();
            	}

Dynamic LabelLayout_obj::__CreateEmpty() { return new LabelLayout_obj; }

void *LabelLayout_obj::_hx_vtable = 0;

Dynamic LabelLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LabelLayout_obj > _hx_result = new LabelLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LabelLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x59fd83ce) {
		if (inClassId<=(int)0x548a03f5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x548a03f5;
		} else {
			return inClassId==(int)0x59fd83ce;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void LabelLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_bdd5c070733c0f7e_79_resizeChildren)
HXLINE(  80)		if ((this->get_component()->get_autoWidth() == false)) {
HXLINE(  81)			 ::haxe::ui::core::TextDisplay _hx_tmp = this->get_component()->getTextDisplay();
HXDLIN(  81)			 ::Dynamic _hx_tmp1 = this->get_component()->get_componentWidth();
HXDLIN(  81)			Float _hx_tmp2 = (_hx_tmp1 - this->get_paddingLeft());
HXDLIN(  81)			_hx_tmp->set_width((_hx_tmp2 - this->get_paddingRight()));
            		}
HXLINE(  93)		if ((this->get_component()->get_autoHeight() == true)) {
HXLINE(  94)			 ::haxe::ui::core::TextDisplay _hx_tmp3 = this->get_component()->getTextDisplay();
HXDLIN(  94)			_hx_tmp3->set_height(this->get_component()->getTextDisplay()->get_textHeight());
            		}
            		else {
HXLINE(  96)			 ::haxe::ui::core::TextDisplay _hx_tmp4 = this->get_component()->getTextDisplay();
HXDLIN(  96)			_hx_tmp4->set_height(this->get_component()->get_height());
            		}
            	}


void LabelLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_bdd5c070733c0f7e_101_repositionChildren)
HXDLIN( 101)		if ((this->get_component()->hasTextDisplay() == true)) {
HXLINE( 102)			 ::haxe::ui::core::TextDisplay _hx_tmp = this->get_component()->getTextDisplay();
HXDLIN( 102)			_hx_tmp->set_left(this->get_paddingLeft());
HXLINE( 103)			 ::haxe::ui::core::TextDisplay _hx_tmp1 = this->get_component()->getTextDisplay();
HXDLIN( 103)			_hx_tmp1->set_top(this->get_paddingTop());
            		}
            	}


 ::haxe::ui::util::Size LabelLayout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_bdd5c070733c0f7e_107_calcAutoSize)
HXLINE( 108)		 ::haxe::ui::util::Size size = this->super::calcAutoSize(exclusions);
HXLINE( 109)		if ((this->get_component()->hasTextDisplay() == true)) {
HXLINE( 110)			 ::haxe::ui::util::Size size1 = size;
HXDLIN( 110)			Float size2 = size1->width;
HXDLIN( 110)			size1->width = (size2 + this->get_component()->getTextDisplay()->get_textWidth());
HXLINE( 111)			 ::haxe::ui::util::Size size3 = size;
HXDLIN( 111)			Float size4 = size3->height;
HXDLIN( 111)			size3->height = (size4 + this->get_component()->getTextDisplay()->get_textHeight());
            		}
HXLINE( 113)		return size;
            	}


::String LabelLayout_obj::textAlign( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_bdd5c070733c0f7e_116_textAlign)
HXLINE( 117)		bool _hx_tmp;
HXDLIN( 117)		bool _hx_tmp1;
HXDLIN( 117)		if (hx::IsNotNull( child )) {
HXLINE( 117)			_hx_tmp1 = hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE( 117)			_hx_tmp1 = true;
            		}
HXDLIN( 117)		if (!(_hx_tmp1)) {
HXLINE( 117)			_hx_tmp = hx::IsNull( child->get_style()->textAlign );
            		}
            		else {
HXLINE( 117)			_hx_tmp = true;
            		}
HXDLIN( 117)		if (_hx_tmp) {
HXLINE( 118)			return HX_("left",07,08,b0,47);
            		}
HXLINE( 120)		return child->get_style()->textAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LabelLayout_obj,textAlign,return )


hx::ObjectPtr< LabelLayout_obj > LabelLayout_obj::__new() {
	hx::ObjectPtr< LabelLayout_obj > __this = new LabelLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< LabelLayout_obj > LabelLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	LabelLayout_obj *__this = (LabelLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(LabelLayout_obj), true, "haxe.ui.components.LabelLayout"));
	*(void **)__this = LabelLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LabelLayout_obj::LabelLayout_obj()
{
}

hx::Val LabelLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"textAlign") ) { return hx::Val( textAlign_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return hx::Val( calcAutoSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return hx::Val( resizeChildren_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *LabelLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *LabelLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String LabelLayout_obj_sMemberFields[] = {
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("calcAutoSize","\x85","\x81","\x3f","\xfd"),
	HX_HCSTRING("textAlign","\xd8","\xe6","\x7e","\xba"),
	::String(null()) };

static void LabelLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LabelLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LabelLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LabelLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class LabelLayout_obj::__mClass;

void LabelLayout_obj::__register()
{
	hx::Object *dummy = new LabelLayout_obj;
	LabelLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.LabelLayout","\xd8","\xf8","\x33","\x69");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LabelLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(LabelLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LabelLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LabelLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LabelLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LabelLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
