// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
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
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_MouseEvent
#include <haxe/ui/core/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b9089dc793ca35ae_5_new,"haxe.ui.core.ItemRenderer","new",0x7561ad25,"haxe.ui.core.ItemRenderer.new","haxe/ui/core/ItemRenderer.hx",5,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_13__onItemMouseOver,"haxe.ui.core.ItemRenderer","_onItemMouseOver",0x92442083,"haxe.ui.core.ItemRenderer._onItemMouseOver","haxe/ui/core/ItemRenderer.hx",13,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_17__onItemMouseOut,"haxe.ui.core.ItemRenderer","_onItemMouseOut",0x691f4c3f,"haxe.ui.core.ItemRenderer._onItemMouseOut","haxe/ui/core/ItemRenderer.hx",17,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_23_get_allowHover,"haxe.ui.core.ItemRenderer","get_allowHover",0x22bd2817,"haxe.ui.core.ItemRenderer.get_allowHover","haxe/ui/core/ItemRenderer.hx",23,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_25_set_allowHover,"haxe.ui.core.ItemRenderer","set_allowHover",0x42dd108b,"haxe.ui.core.ItemRenderer.set_allowHover","haxe/ui/core/ItemRenderer.hx",25,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_43_get_data,"haxe.ui.core.ItemRenderer","get_data",0x25a0cace,"haxe.ui.core.ItemRenderer.get_data","haxe/ui/core/ItemRenderer.hx",43,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_45_set_data,"haxe.ui.core.ItemRenderer","set_data",0xd3fe2442,"haxe.ui.core.ItemRenderer.set_data","haxe/ui/core/ItemRenderer.hx",45,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_56_validateData,"haxe.ui.core.ItemRenderer","validateData",0x9008387b,"haxe.ui.core.ItemRenderer.validateData","haxe/ui/core/ItemRenderer.hx",56,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_8865f9103c49eb54_1_cloneComponent,"haxe.ui.core.ItemRenderer","cloneComponent",0x7cede8fb,"haxe.ui.core.ItemRenderer.cloneComponent","src/haxe/ui/core/ItemRenderer.hx",1,0x4cefd8f5)
HX_LOCAL_STACK_FRAME(_hx_pos_8865f9103c49eb54_2_self,"haxe.ui.core.ItemRenderer","self",0x4363db27,"haxe.ui.core.ItemRenderer.self","src/haxe/ui/core/ItemRenderer.hx",2,0x4cefd8f5)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_5_boot,"haxe.ui.core.ItemRenderer","boot",0x382ed3cd,"haxe.ui.core.ItemRenderer.boot","haxe/ui/core/ItemRenderer.hx",5,0x40996daa)
namespace haxe{
namespace ui{
namespace core{

void ItemRenderer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_5_new)
HXLINE(  20)		this->_allowHover = true;
HXLINE(   7)		super::__construct();
HXLINE(   8)		this->registerEvent(HX_("mouseover",f9,1d,34,0b),this->_onItemMouseOver_dyn());
HXLINE(   9)		this->registerEvent(HX_("mouseout",89,2f,36,a4),this->_onItemMouseOut_dyn());
            	}

Dynamic ItemRenderer_obj::__CreateEmpty() { return new ItemRenderer_obj; }

void *ItemRenderer_obj::_hx_vtable = 0;

Dynamic ItemRenderer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ItemRenderer_obj > _hx_result = new ItemRenderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ItemRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x3200b6b7) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3200b6b7;
		} else {
			return inClassId==(int)0x4a06d0bc;
		}
	} else {
		return inClassId==(int)0x7140e8dc;
	}
}

void ItemRenderer_obj::_onItemMouseOver( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_13__onItemMouseOver)
HXDLIN(  13)		this->addClass(HX_(":hover",42,d3,17,5c),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,_onItemMouseOver,(void))

void ItemRenderer_obj::_onItemMouseOut( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_17__onItemMouseOut)
HXDLIN(  17)		this->removeClass(HX_(":hover",42,d3,17,5c),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,_onItemMouseOut,(void))

bool ItemRenderer_obj::get_allowHover(){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_23_get_allowHover)
HXDLIN(  23)		return this->_allowHover;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ItemRenderer_obj,get_allowHover,return )

bool ItemRenderer_obj::set_allowHover(bool value){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_25_set_allowHover)
HXLINE(  26)		if ((this->_allowHover == value)) {
HXLINE(  27)			return value;
            		}
HXLINE(  29)		this->_allowHover = value;
HXLINE(  30)		if ((this->_allowHover == true)) {
HXLINE(  31)			this->registerEvent(HX_("mouseover",f9,1d,34,0b),this->_onItemMouseOver_dyn());
HXLINE(  32)			this->registerEvent(HX_("mouseout",89,2f,36,a4),this->_onItemMouseOut_dyn());
            		}
            		else {
HXLINE(  34)			this->unregisterEvent(HX_("mouseover",f9,1d,34,0b),this->_onItemMouseOver_dyn());
HXLINE(  35)			this->unregisterEvent(HX_("mouseout",89,2f,36,a4),this->_onItemMouseOut_dyn());
            		}
HXLINE(  37)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,set_allowHover,return )

 ::Dynamic ItemRenderer_obj::get_data(){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_43_get_data)
HXDLIN(  43)		return this->_data;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ItemRenderer_obj,get_data,return )

 ::Dynamic ItemRenderer_obj::set_data( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_45_set_data)
HXLINE(  46)		if (hx::IsEq( value,this->_data )) {
HXLINE(  47)			return value;
            		}
HXLINE(  50)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE(  51)		this->_data = value;
HXLINE(  52)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,set_data,return )

void ItemRenderer_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_b9089dc793ca35ae_56_validateData)
HXDLIN(  56)		int _g = (int)0;
HXDLIN(  56)		::Array< ::String > _g1 = ::Reflect_obj::fields(this->_data);
HXDLIN(  56)		while((_g < _g1->length)){
HXDLIN(  56)			::String f = _g1->__get(_g);
HXDLIN(  56)			_g = (_g + (int)1);
HXLINE(  57)			 ::Dynamic v = ::Reflect_obj::field(this->_data,f);
HXLINE(  58)			 ::haxe::ui::core::Component c = ( ( ::haxe::ui::core::Component)(this->findComponent(f,null(),true,null())) );
HXLINE(  59)			bool _hx_tmp;
HXDLIN(  59)			if (hx::IsNotNull( c )) {
HXLINE(  59)				_hx_tmp = hx::IsNotNull( v );
            			}
            			else {
HXLINE(  59)				_hx_tmp = false;
            			}
HXDLIN(  59)			if (_hx_tmp) {
HXLINE(  60)				if (hx::IsEq( ::Type_obj::_hx_typeof(v),::ValueType_obj::TObject_dyn() )) {
HXLINE(  61)					int _g2 = (int)0;
HXDLIN(  61)					::Array< ::String > _g3 = ::Reflect_obj::fields(v);
HXDLIN(  61)					while((_g2 < _g3->length)){
HXLINE(  61)						::String propName = _g3->__get(_g2);
HXDLIN(  61)						_g2 = (_g2 + (int)1);
HXLINE(  62)						 ::Dynamic propValue = ::Reflect_obj::field(v,propName);
HXLINE(  64)						bool _hx_tmp1;
HXDLIN(  64)						bool _hx_tmp2;
HXDLIN(  64)						bool _hx_tmp3;
HXDLIN(  64)						if (hx::IsNotEq( propValue,HX_("true",4e,a7,03,4d) )) {
HXLINE(  64)							_hx_tmp3 = hx::IsEq( propValue,HX_("yes",27,29,5c,00) );
            						}
            						else {
HXLINE(  64)							_hx_tmp3 = true;
            						}
HXDLIN(  64)						if (!(_hx_tmp3)) {
HXLINE(  64)							_hx_tmp2 = hx::IsEq( propValue,HX_("false",a3,35,4f,fb) );
            						}
            						else {
HXLINE(  64)							_hx_tmp2 = true;
            						}
HXDLIN(  64)						if (!(_hx_tmp2)) {
HXLINE(  64)							_hx_tmp1 = hx::IsEq( propValue,HX_("no",41,60,00,00) );
            						}
            						else {
HXLINE(  64)							_hx_tmp1 = true;
            						}
HXDLIN(  64)						if (_hx_tmp1) {
HXLINE(  65)							if (hx::IsNotEq( propValue,HX_("true",4e,a7,03,4d) )) {
HXLINE(  65)								propValue = hx::IsEq( propValue,HX_("yes",27,29,5c,00) );
            							}
            							else {
HXLINE(  65)								propValue = true;
            							}
            						}
            						else {
HXLINE(  66)							if ( ::EReg_obj::__alloc( HX_CTX ,HX_("^[0-9]*$",38,6a,c4,08),HX_("i",69,00,00,00))->match(( (::String)(propValue) ))) {
HXLINE(  67)								propValue = ::Std_obj::parseInt(( (::String)(propValue) ));
            							}
            						}
HXLINE(  70)						if ((propName == HX_("value",71,7f,b8,31))) {
HXLINE(  71)							c->set_value(::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(propValue));
            						}
            						else {
HXLINE(  73)							::Reflect_obj::setProperty(c,propName,propValue);
            						}
            					}
            				}
            				else {
HXLINE(  77)					c->set_value(::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(v));
            				}
HXLINE(  79)				c->show();
            			}
            			else {
HXLINE(  80)				if (hx::IsNotNull( c )) {
HXLINE(  81)					c->hide();
            				}
            			}
            		}
            	}


 ::haxe::ui::core::Component ItemRenderer_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_8865f9103c49eb54_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::core::ItemRenderer c = ( ( ::haxe::ui::core::ItemRenderer)(this->super::cloneComponent()) );
HXLINE(   3)		c->set_allowHover(this->get_allowHover());
HXLINE(   4)		return c;
            	}


 ::haxe::ui::core::Component ItemRenderer_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_8865f9103c49eb54_2_self)
HXDLIN(   2)		return  ::haxe::ui::core::ItemRenderer_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< ItemRenderer_obj > ItemRenderer_obj::__new() {
	hx::ObjectPtr< ItemRenderer_obj > __this = new ItemRenderer_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ItemRenderer_obj > ItemRenderer_obj::__alloc(hx::Ctx *_hx_ctx) {
	ItemRenderer_obj *__this = (ItemRenderer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ItemRenderer_obj), true, "haxe.ui.core.ItemRenderer"));
	*(void **)__this = ItemRenderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ItemRenderer_obj::ItemRenderer_obj()
{
}

void ItemRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ItemRenderer);
	HX_MARK_MEMBER_NAME(_allowHover,"_allowHover");
	HX_MARK_MEMBER_NAME(_data,"_data");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ItemRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_allowHover,"_allowHover");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ItemRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_data() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return hx::Val( _data ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_data") ) { return hx::Val( get_data_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return hx::Val( set_data_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allowHover") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_allowHover() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_allowHover") ) { return hx::Val( _allowHover ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_allowHover") ) { return hx::Val( get_allowHover_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_allowHover") ) { return hx::Val( set_allowHover_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_onItemMouseOut") ) { return hx::Val( _onItemMouseOut_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_onItemMouseOver") ) { return hx::Val( _onItemMouseOver_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ItemRenderer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_data(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allowHover") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_allowHover(inValue.Cast< bool >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_allowHover") ) { _allowHover=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ItemRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_allowHover","\x92","\x6d","\xba","\x28"));
	outFields->push(HX_HCSTRING("allowHover","\x73","\xa0","\x30","\x56"));
	outFields->push(HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ItemRenderer_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ItemRenderer_obj,_allowHover),HX_HCSTRING("_allowHover","\x92","\x6d","\xba","\x28")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ItemRenderer_obj,_data),HX_HCSTRING("_data","\x09","\x72","\x74","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ItemRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String ItemRenderer_obj_sMemberFields[] = {
	HX_HCSTRING("_onItemMouseOver","\x68","\x54","\x6a","\x28"),
	HX_HCSTRING("_onItemMouseOut","\xfa","\xdb","\x96","\xfb"),
	HX_HCSTRING("_allowHover","\x92","\x6d","\xba","\x28"),
	HX_HCSTRING("get_allowHover","\xbc","\x28","\x26","\xcc"),
	HX_HCSTRING("set_allowHover","\x30","\x11","\x46","\xec"),
	HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	HX_HCSTRING("set_data","\x27","\x6b","\x7b","\x70"),
	HX_HCSTRING("validateData","\xe0","\x55","\x63","\x96"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void ItemRenderer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ItemRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ItemRenderer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ItemRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class ItemRenderer_obj::__mClass;

void ItemRenderer_obj::__register()
{
	hx::Object *dummy = new ItemRenderer_obj;
	ItemRenderer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.core.ItemRenderer","\xb3","\x36","\x19","\x22");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ItemRenderer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ItemRenderer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ItemRenderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ItemRenderer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ItemRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ItemRenderer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ItemRenderer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_5_boot)
HXDLIN(   5)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("allowHover",73,a0,30,56), ::Dynamic(hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null()))))));
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
