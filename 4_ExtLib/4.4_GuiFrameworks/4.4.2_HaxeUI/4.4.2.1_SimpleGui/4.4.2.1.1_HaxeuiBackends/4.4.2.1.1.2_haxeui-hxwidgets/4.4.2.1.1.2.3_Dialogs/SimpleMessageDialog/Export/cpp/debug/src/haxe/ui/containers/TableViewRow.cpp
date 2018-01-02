// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TableViewRow
#include <haxe/ui/containers/TableViewRow.h>
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
#ifndef INCLUDED_haxe_ui_core_MouseEvent
#include <haxe/ui/core/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_01585e879206120b_424_new,"haxe.ui.containers.TableViewRow","new",0x5d0490e3,"haxe.ui.containers.TableViewRow.new","haxe/ui/containers/TableView.hx",424,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_01585e879206120b_431__onMouseOver,"haxe.ui.containers.TableViewRow","_onMouseOver",0x4bac7218,"haxe.ui.containers.TableViewRow._onMouseOver","haxe/ui/containers/TableView.hx",431,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_01585e879206120b_437__onMouseOut,"haxe.ui.containers.TableViewRow","_onMouseOut",0xe158044a,"haxe.ui.containers.TableViewRow._onMouseOut","haxe/ui/containers/TableView.hx",437,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_01585e879206120b_444_get_data,"haxe.ui.containers.TableViewRow","get_data",0x4d759650,"haxe.ui.containers.TableViewRow.get_data","haxe/ui/containers/TableView.hx",444,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_01585e879206120b_446_set_data,"haxe.ui.containers.TableViewRow","set_data",0xfbd2efc4,"haxe.ui.containers.TableViewRow.set_data","haxe/ui/containers/TableView.hx",446,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_500aeb09b6b231d7_1_cloneComponent,"haxe.ui.containers.TableViewRow","cloneComponent",0xded341fd,"haxe.ui.containers.TableViewRow.cloneComponent","src/haxe/ui/containers/TableViewRow.hx",1,0x408df937)
HX_LOCAL_STACK_FRAME(_hx_pos_500aeb09b6b231d7_2_self,"haxe.ui.containers.TableViewRow","self",0x0a483da9,"haxe.ui.containers.TableViewRow.self","src/haxe/ui/containers/TableViewRow.hx",2,0x408df937)
namespace haxe{
namespace ui{
namespace containers{

void TableViewRow_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_01585e879206120b_424_new)
HXLINE( 425)		super::__construct();
HXLINE( 426)		this->registerEvent(HX_("mouseover",f9,1d,34,0b),this->_onMouseOver_dyn());
HXLINE( 427)		this->registerEvent(HX_("mouseout",89,2f,36,a4),this->_onMouseOut_dyn());
            	}

Dynamic TableViewRow_obj::__CreateEmpty() { return new TableViewRow_obj; }

void *TableViewRow_obj::_hx_vtable = 0;

Dynamic TableViewRow_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TableViewRow_obj > _hx_result = new TableViewRow_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TableViewRow_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x41081cbb) {
			if (inClassId<=(int)0x2fa91efb) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2fa91efb;
			} else {
				return inClassId==(int)0x41081cbb;
			}
		} else {
			return inClassId==(int)0x4a06d0bc;
		}
	} else {
		return inClassId==(int)0x7140e8dc || inClassId==(int)0x7eec346f;
	}
}

void TableViewRow_obj::_onMouseOver( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_01585e879206120b_431__onMouseOver)
HXDLIN( 431)		int _g = (int)0;
HXDLIN( 431)		::Array< ::Dynamic> _g1 = this->get_childComponents();
HXDLIN( 431)		while((_g < _g1->length)){
HXDLIN( 431)			 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 431)			_g = (_g + (int)1);
HXLINE( 432)			c->addClass(HX_(":hover",42,d3,17,5c),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TableViewRow_obj,_onMouseOver,(void))

void TableViewRow_obj::_onMouseOut( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_01585e879206120b_437__onMouseOut)
HXDLIN( 437)		int _g = (int)0;
HXDLIN( 437)		::Array< ::Dynamic> _g1 = this->get_childComponents();
HXDLIN( 437)		while((_g < _g1->length)){
HXDLIN( 437)			 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 437)			_g = (_g + (int)1);
HXLINE( 438)			c->removeClass(HX_(":hover",42,d3,17,5c),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TableViewRow_obj,_onMouseOut,(void))

 ::Dynamic TableViewRow_obj::get_data(){
            	HX_STACKFRAME(&_hx_pos_01585e879206120b_444_get_data)
HXDLIN( 444)		return this->userData;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TableViewRow_obj,get_data,return )

 ::Dynamic TableViewRow_obj::set_data( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_01585e879206120b_446_set_data)
HXLINE( 447)		this->userData = value;
HXLINE( 448)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TableViewRow_obj,set_data,return )

 ::haxe::ui::core::Component TableViewRow_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_500aeb09b6b231d7_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::containers::TableViewRow c = ( ( ::haxe::ui::containers::TableViewRow)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component TableViewRow_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_500aeb09b6b231d7_2_self)
HXDLIN(   2)		return  ::haxe::ui::containers::TableViewRow_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< TableViewRow_obj > TableViewRow_obj::__new() {
	hx::ObjectPtr< TableViewRow_obj > __this = new TableViewRow_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< TableViewRow_obj > TableViewRow_obj::__alloc(hx::Ctx *_hx_ctx) {
	TableViewRow_obj *__this = (TableViewRow_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TableViewRow_obj), true, "haxe.ui.containers.TableViewRow"));
	*(void **)__this = TableViewRow_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TableViewRow_obj::TableViewRow_obj()
{
}

hx::Val TableViewRow_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_data() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_data") ) { return hx::Val( get_data_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return hx::Val( set_data_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onMouseOut") ) { return hx::Val( _onMouseOut_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_onMouseOver") ) { return hx::Val( _onMouseOver_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TableViewRow_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_data(inValue.Cast<  ::Dynamic >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TableViewRow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TableViewRow_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *TableViewRow_obj_sStaticStorageInfo = 0;
#endif

static ::String TableViewRow_obj_sMemberFields[] = {
	HX_HCSTRING("_onMouseOver","\xfb","\xda","\x59","\x7e"),
	HX_HCSTRING("_onMouseOut","\xc7","\x88","\x5e","\x54"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	HX_HCSTRING("set_data","\x27","\x6b","\x7b","\x70"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void TableViewRow_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TableViewRow_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TableViewRow_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TableViewRow_obj::__mClass,"__mClass");
};

#endif

hx::Class TableViewRow_obj::__mClass;

void TableViewRow_obj::__register()
{
	hx::Object *dummy = new TableViewRow_obj;
	TableViewRow_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.TableViewRow","\x71","\xe3","\xd3","\xd2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TableViewRow_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TableViewRow_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TableViewRow_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TableViewRow_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TableViewRow_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TableViewRow_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
