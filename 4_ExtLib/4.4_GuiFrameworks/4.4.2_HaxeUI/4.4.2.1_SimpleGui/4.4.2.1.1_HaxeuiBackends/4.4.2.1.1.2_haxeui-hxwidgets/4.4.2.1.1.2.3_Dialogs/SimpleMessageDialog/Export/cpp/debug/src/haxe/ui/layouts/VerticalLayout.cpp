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
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_VerticalLayout
#include <haxe/ui/layouts/VerticalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Size
#include <haxe/ui/util/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_92452d52ec42a325_7_new,"haxe.ui.layouts.VerticalLayout","new",0x851ed929,"haxe.ui.layouts.VerticalLayout.new","haxe/ui/layouts/VerticalLayout.hx",7,0x6373e2a6)
HX_LOCAL_STACK_FRAME(_hx_pos_92452d52ec42a325_10_repositionChildren,"haxe.ui.layouts.VerticalLayout","repositionChildren",0x1a754212,"haxe.ui.layouts.VerticalLayout.repositionChildren","haxe/ui/layouts/VerticalLayout.hx",10,0x6373e2a6)
HX_LOCAL_STACK_FRAME(_hx_pos_92452d52ec42a325_37_get_usableSize,"haxe.ui.layouts.VerticalLayout","get_usableSize",0xc2c495f9,"haxe.ui.layouts.VerticalLayout.get_usableSize","haxe/ui/layouts/VerticalLayout.hx",37,0x6373e2a6)
namespace haxe{
namespace ui{
namespace layouts{

void VerticalLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_92452d52ec42a325_7_new)
HXDLIN(   7)		super::__construct();
            	}

Dynamic VerticalLayout_obj::__CreateEmpty() { return new VerticalLayout_obj; }

void *VerticalLayout_obj::_hx_vtable = 0;

Dynamic VerticalLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VerticalLayout_obj > _hx_result = new VerticalLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VerticalLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x548a03f5) {
		if (inClassId<=(int)0x0fa94243) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0fa94243;
		} else {
			return inClassId==(int)0x548a03f5;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void VerticalLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_92452d52ec42a325_10_repositionChildren)
HXLINE(  11)		Float ypos = this->get_paddingTop();
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
HXLINE(  19)				Float xpos = (int)0;
HXLINE(  21)				{
HXLINE(  21)					::String _g2 = this->horizontalAlign(child);
HXDLIN(  21)					::String _hx_switch_0 = _g2;
            					if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE(  23)						 ::Dynamic xpos1 = this->get_component()->get_componentWidth();
HXDLIN(  23)						Float xpos2 = ((Float)(xpos1 - child->get_componentWidth()) / (Float)(int)2);
HXDLIN(  23)						Float xpos3 = (xpos2 + this->marginLeft(child));
HXDLIN(  23)						xpos = (xpos3 - this->marginRight(child));
HXDLIN(  23)						goto _hx_goto_2;
            					}
            					if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE(  25)						 ::Dynamic _hx_tmp = child->get_componentWidth();
HXDLIN(  25)						if (hx::IsLess( _hx_tmp,this->get_component()->get_componentWidth() )) {
HXLINE(  26)							 ::Dynamic xpos4 = this->get_component()->get_componentWidth();
HXDLIN(  26)							 ::Dynamic xpos5 = child->get_componentWidth();
HXDLIN(  26)							Float xpos6 = (xpos5 + this->get_paddingRight());
HXDLIN(  26)							xpos = (xpos4 - (xpos6 + this->marginLeft(child)));
            						}
HXLINE(  25)						goto _hx_goto_2;
            					}
            					/* default */{
HXLINE(  29)						Float xpos7 = this->get_paddingLeft();
HXDLIN(  29)						xpos = (xpos7 + this->marginLeft(child));
            					}
            					_hx_goto_2:;
            				}
HXLINE(  32)				child->moveComponent(xpos,(ypos + this->marginTop(child)));
HXLINE(  33)				 ::Dynamic ypos1 = child->get_componentHeight();
HXDLIN(  33)				ypos = (ypos + (ypos1 + this->get_verticalSpacing()));
            			}
            		}
            	}


 ::haxe::ui::util::Size VerticalLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_92452d52ec42a325_37_get_usableSize)
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
HXDLIN(  47)				if (hx::IsGreater( child->get_componentHeight(),(int)0 )) {
HXLINE(  47)					_hx_tmp = hx::IsNull( child->get_percentHeight() );
            				}
            				else {
HXLINE(  47)					_hx_tmp = false;
            				}
HXDLIN(  47)				if (_hx_tmp) {
HXLINE(  48)					 ::haxe::ui::util::Size size1 = size;
HXDLIN(  48)					Float size2 = size1->height;
HXDLIN(  48)					 ::Dynamic _hx_tmp1 = child->get_componentHeight();
HXDLIN(  48)					Float _hx_tmp2 = (_hx_tmp1 + this->marginTop(child));
HXDLIN(  48)					size1->height = (size2 - (_hx_tmp2 + this->marginBottom(child)));
            				}
            			}
            		}
HXLINE(  52)		if ((visibleChildren > (int)1)) {
HXLINE(  53)			 ::haxe::ui::util::Size size3 = size;
HXDLIN(  53)			Float size4 = size3->height;
HXDLIN(  53)			Float _hx_tmp3 = this->get_verticalSpacing();
HXDLIN(  53)			size3->height = (size4 - (_hx_tmp3 * (visibleChildren - (int)1)));
            		}
HXLINE(  56)		if ((size->height < (int)0)) {
HXLINE(  57)			size->height = (int)0;
            		}
HXLINE(  59)		return size;
            	}



hx::ObjectPtr< VerticalLayout_obj > VerticalLayout_obj::__new() {
	hx::ObjectPtr< VerticalLayout_obj > __this = new VerticalLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< VerticalLayout_obj > VerticalLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	VerticalLayout_obj *__this = (VerticalLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VerticalLayout_obj), true, "haxe.ui.layouts.VerticalLayout"));
	*(void **)__this = VerticalLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VerticalLayout_obj::VerticalLayout_obj()
{
}

hx::Val VerticalLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *VerticalLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *VerticalLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String VerticalLayout_obj_sMemberFields[] = {
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("get_usableSize","\x22","\x8c","\xf5","\x3e"),
	::String(null()) };

static void VerticalLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VerticalLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VerticalLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VerticalLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class VerticalLayout_obj::__mClass;

void VerticalLayout_obj::__register()
{
	hx::Object *dummy = new VerticalLayout_obj;
	VerticalLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.layouts.VerticalLayout","\xb7","\x10","\x47","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VerticalLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VerticalLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VerticalLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VerticalLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VerticalLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VerticalLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
