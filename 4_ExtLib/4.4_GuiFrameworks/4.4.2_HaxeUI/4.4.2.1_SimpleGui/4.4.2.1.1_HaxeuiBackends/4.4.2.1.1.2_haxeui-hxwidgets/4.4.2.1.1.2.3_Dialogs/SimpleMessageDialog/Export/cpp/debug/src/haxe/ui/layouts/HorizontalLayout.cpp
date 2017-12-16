// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
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
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalLayout
#include <haxe/ui/layouts/HorizontalLayout.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4514bb6da4ff9b3b_7_new,"haxe.ui.layouts.HorizontalLayout","new",0xccf07ad7,"haxe.ui.layouts.HorizontalLayout.new","haxe/ui/layouts/HorizontalLayout.hx",7,0xc1db5e78)
HX_LOCAL_STACK_FRAME(_hx_pos_4514bb6da4ff9b3b_10_repositionChildren,"haxe.ui.layouts.HorizontalLayout","repositionChildren",0xf25cb424,"haxe.ui.layouts.HorizontalLayout.repositionChildren","haxe/ui/layouts/HorizontalLayout.hx",10,0xc1db5e78)
HX_LOCAL_STACK_FRAME(_hx_pos_4514bb6da4ff9b3b_37_get_usableSize,"haxe.ui.layouts.HorizontalLayout","get_usableSize",0x6ea1170b,"haxe.ui.layouts.HorizontalLayout.get_usableSize","haxe/ui/layouts/HorizontalLayout.hx",37,0xc1db5e78)
namespace haxe{
namespace ui{
namespace layouts{

void HorizontalLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4514bb6da4ff9b3b_7_new)
HXDLIN(   7)		super::__construct();
            	}

Dynamic HorizontalLayout_obj::__CreateEmpty() { return new HorizontalLayout_obj; }

void *HorizontalLayout_obj::_hx_vtable = 0;

Dynamic HorizontalLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HorizontalLayout_obj > _hx_result = new HorizontalLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HorizontalLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x548a03f5) {
		if (inClassId<=(int)0x232229d5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x232229d5;
		} else {
			return inClassId==(int)0x548a03f5;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void HorizontalLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_4514bb6da4ff9b3b_10_repositionChildren)
HXLINE(  11)		Float xpos = this->get_paddingLeft();
HXLINE(  12)		 ::haxe::ui::util::Size usableSize = this->get_component()->get_layout()->get_usableSize();
HXLINE(  14)		{
HXLINE(  14)			int _g = (int)0;
HXDLIN(  14)			::Array< ::Dynamic> _g1 = this->get_component()->get_childComponents();
HXDLIN(  14)			while((_g < _g1->length)){
HXLINE(  14)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  14)				_g = (_g + (int)1);
HXLINE(  15)				if ((child->get_includeInLayout() == false)) {
HXLINE(  16)					continue;
            				}
HXLINE(  19)				Float ypos = (int)0;
HXLINE(  21)				{
HXLINE(  21)					::String _g2 = this->verticalAlign(child);
HXDLIN(  21)					::String _hx_switch_0 = _g2;
            					if (  (_hx_switch_0==HX_("bottom",eb,e6,78,65)) ){
HXLINE(  25)						 ::Dynamic _hx_tmp = child->get_componentHeight();
HXDLIN(  25)						if (hx::IsLess( _hx_tmp,this->get_component()->get_componentHeight() )) {
HXLINE(  26)							 ::Dynamic ypos1 = this->get_component()->get_componentHeight();
HXDLIN(  26)							 ::Dynamic ypos2 = child->get_componentHeight();
HXDLIN(  26)							Float ypos3 = (ypos2 + this->get_paddingBottom());
HXDLIN(  26)							ypos = (ypos1 - (ypos3 + this->marginTop(child)));
            						}
HXLINE(  25)						goto _hx_goto_2;
            					}
            					if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE(  23)						 ::Dynamic ypos4 = this->get_component()->get_componentHeight();
HXDLIN(  23)						Float ypos5 = ((Float)(ypos4 - child->get_componentHeight()) / (Float)(int)2);
HXDLIN(  23)						Float ypos6 = (ypos5 + this->marginTop(child));
HXDLIN(  23)						ypos = (ypos6 - this->marginBottom(child));
HXDLIN(  23)						goto _hx_goto_2;
            					}
            					/* default */{
HXLINE(  29)						Float ypos7 = this->get_paddingTop();
HXDLIN(  29)						ypos = (ypos7 + this->marginTop(child));
            					}
            					_hx_goto_2:;
            				}
HXLINE(  32)				child->moveComponent((xpos + this->marginLeft(child)),ypos);
HXLINE(  33)				 ::Dynamic xpos1 = child->get_componentWidth();
HXDLIN(  33)				xpos = (xpos + (xpos1 + this->get_horizontalSpacing()));
            			}
            		}
            	}


 ::haxe::ui::util::Size HorizontalLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_4514bb6da4ff9b3b_37_get_usableSize)
HXLINE(  38)		 ::haxe::ui::util::Size size = this->super::get_usableSize();
HXLINE(  40)		int visibleChildren = this->get_component()->get_childComponents()->length;
HXLINE(  41)		{
HXLINE(  41)			int _g = (int)0;
HXDLIN(  41)			::Array< ::Dynamic> _g1 = this->get_component()->get_childComponents();
HXDLIN(  41)			while((_g < _g1->length)){
HXLINE(  41)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  41)				_g = (_g + (int)1);
HXLINE(  42)				if ((child->get_includeInLayout() == false)) {
HXLINE(  43)					visibleChildren = (visibleChildren - (int)1);
HXLINE(  44)					continue;
            				}
HXLINE(  47)				bool _hx_tmp;
HXDLIN(  47)				if (hx::IsGreater( child->get_componentWidth(),(int)0 )) {
HXLINE(  47)					_hx_tmp = hx::IsNull( child->get_percentWidth() );
            				}
            				else {
HXLINE(  47)					_hx_tmp = false;
            				}
HXDLIN(  47)				if (_hx_tmp) {
HXLINE(  48)					 ::haxe::ui::util::Size size1 = size;
HXDLIN(  48)					Float size2 = size1->width;
HXDLIN(  48)					 ::Dynamic _hx_tmp1 = child->get_componentWidth();
HXDLIN(  48)					Float _hx_tmp2 = (_hx_tmp1 + this->marginLeft(child));
HXDLIN(  48)					size1->width = (size2 - (_hx_tmp2 + this->marginRight(child)));
            				}
            			}
            		}
HXLINE(  52)		if ((visibleChildren > (int)1)) {
HXLINE(  53)			 ::haxe::ui::util::Size size3 = size;
HXDLIN(  53)			Float size4 = size3->width;
HXDLIN(  53)			Float _hx_tmp3 = this->get_horizontalSpacing();
HXDLIN(  53)			size3->width = (size4 - (_hx_tmp3 * (visibleChildren - (int)1)));
            		}
HXLINE(  56)		if ((size->width < (int)0)) {
HXLINE(  57)			size->width = (int)0;
            		}
HXLINE(  60)		return size;
            	}



hx::ObjectPtr< HorizontalLayout_obj > HorizontalLayout_obj::__new() {
	hx::ObjectPtr< HorizontalLayout_obj > __this = new HorizontalLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< HorizontalLayout_obj > HorizontalLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	HorizontalLayout_obj *__this = (HorizontalLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HorizontalLayout_obj), true, "haxe.ui.layouts.HorizontalLayout"));
	*(void **)__this = HorizontalLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HorizontalLayout_obj::HorizontalLayout_obj()
{
}

hx::Val HorizontalLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return hx::Val( get_usableSize_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *HorizontalLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *HorizontalLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String HorizontalLayout_obj_sMemberFields[] = {
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("get_usableSize","\x22","\x8c","\xf5","\x3e"),
	::String(null()) };

static void HorizontalLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HorizontalLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HorizontalLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HorizontalLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class HorizontalLayout_obj::__mClass;

void HorizontalLayout_obj::__register()
{
	hx::Object *dummy = new HorizontalLayout_obj;
	HorizontalLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.layouts.HorizontalLayout","\x65","\xc3","\x9e","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HorizontalLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HorizontalLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HorizontalLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HorizontalLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HorizontalLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HorizontalLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
