// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_data_ArrayDataSource
#include <haxe/ui/data/ArrayDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_transformation_IItemTransformer
#include <haxe/ui/data/transformation/IItemTransformer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d9449cccdc2aada1_8_new,"haxe.ui.data.ArrayDataSource","new",0x7b80963e,"haxe.ui.data.ArrayDataSource.new","haxe/ui/data/ArrayDataSource.hx",8,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_15_handleGetSize,"haxe.ui.data.ArrayDataSource","handleGetSize",0xcae1410d,"haxe.ui.data.ArrayDataSource.handleGetSize","haxe/ui/data/ArrayDataSource.hx",15,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_19_handleGetItem,"haxe.ui.data.ArrayDataSource","handleGetItem",0xc44d655f,"haxe.ui.data.ArrayDataSource.handleGetItem","haxe/ui/data/ArrayDataSource.hx",19,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_23_handleIndexOf,"haxe.ui.data.ArrayDataSource","handleIndexOf",0x8cca395f,"haxe.ui.data.ArrayDataSource.handleIndexOf","haxe/ui/data/ArrayDataSource.hx",23,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_26_handleAddItem,"haxe.ui.data.ArrayDataSource","handleAddItem",0x2e07f86a,"haxe.ui.data.ArrayDataSource.handleAddItem","haxe/ui/data/ArrayDataSource.hx",26,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_31_handleInsert,"haxe.ui.data.ArrayDataSource","handleInsert",0xba2ff763,"haxe.ui.data.ArrayDataSource.handleInsert","haxe/ui/data/ArrayDataSource.hx",31,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_36_handleRemoveItem,"haxe.ui.data.ArrayDataSource","handleRemoveItem",0xbf7010a1,"haxe.ui.data.ArrayDataSource.handleRemoveItem","haxe/ui/data/ArrayDataSource.hx",36,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_42_handleUpdateItem,"haxe.ui.data.ArrayDataSource","handleUpdateItem",0xfb05c0e6,"haxe.ui.data.ArrayDataSource.handleUpdateItem","haxe/ui/data/ArrayDataSource.hx",42,0xc8e62c93)
HX_LOCAL_STACK_FRAME(_hx_pos_d9449cccdc2aada1_45_clone,"haxe.ui.data.ArrayDataSource","clone",0x7cb38cbb,"haxe.ui.data.ArrayDataSource.clone","haxe/ui/data/ArrayDataSource.hx",45,0xc8e62c93)
namespace haxe{
namespace ui{
namespace data{

void ArrayDataSource_obj::__construct(::Dynamic transformer){
            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_8_new)
HXLINE(   9)		super::__construct(transformer);
HXLINE(  10)		this->_array = ::cpp::VirtualArray_obj::__new(0);
            	}

Dynamic ArrayDataSource_obj::__CreateEmpty() { return new ArrayDataSource_obj; }

void *ArrayDataSource_obj::_hx_vtable = 0;

Dynamic ArrayDataSource_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ArrayDataSource_obj > _hx_result = new ArrayDataSource_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ArrayDataSource_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2511dc29) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2511dc29;
	} else {
		return inClassId==(int)0x7ecbb5b2;
	}
}

int ArrayDataSource_obj::handleGetSize(){
            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_15_handleGetSize)
HXDLIN(  15)		return this->_array->get_length();
            	}


 ::Dynamic ArrayDataSource_obj::handleGetItem(int index){
            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_19_handleGetItem)
HXDLIN(  19)		return this->_array->__get(index);
            	}


int ArrayDataSource_obj::handleIndexOf( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_23_handleIndexOf)
HXDLIN(  23)		return this->_array->indexOf(item,null());
            	}


 ::Dynamic ArrayDataSource_obj::handleAddItem( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_26_handleAddItem)
HXLINE(  27)		this->_array->push(item);
HXLINE(  28)		return item;
            	}


 ::Dynamic ArrayDataSource_obj::handleInsert( ::Dynamic item,int index){
            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_31_handleInsert)
HXLINE(  32)		this->_array->insert(index,item);
HXLINE(  33)		return item;
            	}


 ::Dynamic ArrayDataSource_obj::handleRemoveItem( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_36_handleRemoveItem)
HXLINE(  37)		this->_array->remove(item);
HXLINE(  38)		return item;
            	}


 ::Dynamic ArrayDataSource_obj::handleUpdateItem(int index, ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_d9449cccdc2aada1_42_handleUpdateItem)
HXDLIN(  42)		return (this->_array->set(index,item));
            	}


 ::haxe::ui::data::DataSource ArrayDataSource_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_d9449cccdc2aada1_45_clone)
HXLINE(  46)		 ::haxe::ui::data::ArrayDataSource c =  ::haxe::ui::data::ArrayDataSource_obj::__alloc( HX_CTX ,null());
HXLINE(  47)		c->_array = this->_array->copy();
HXLINE(  48)		return c;
            	}



hx::ObjectPtr< ArrayDataSource_obj > ArrayDataSource_obj::__new(::Dynamic transformer) {
	hx::ObjectPtr< ArrayDataSource_obj > __this = new ArrayDataSource_obj();
	__this->__construct(transformer);
	return __this;
}

hx::ObjectPtr< ArrayDataSource_obj > ArrayDataSource_obj::__alloc(hx::Ctx *_hx_ctx,::Dynamic transformer) {
	ArrayDataSource_obj *__this = (ArrayDataSource_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ArrayDataSource_obj), true, "haxe.ui.data.ArrayDataSource"));
	*(void **)__this = ArrayDataSource_obj::_hx_vtable;
	__this->__construct(transformer);
	return __this;
}

ArrayDataSource_obj::ArrayDataSource_obj()
{
}

void ArrayDataSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayDataSource);
	HX_MARK_MEMBER_NAME(_array,"_array");
	 ::haxe::ui::data::DataSource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ArrayDataSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_array,"_array");
	 ::haxe::ui::data::DataSource_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ArrayDataSource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_array") ) { return hx::Val( _array ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"handleInsert") ) { return hx::Val( handleInsert_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handleGetSize") ) { return hx::Val( handleGetSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleGetItem") ) { return hx::Val( handleGetItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleIndexOf") ) { return hx::Val( handleIndexOf_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleAddItem") ) { return hx::Val( handleAddItem_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handleRemoveItem") ) { return hx::Val( handleRemoveItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleUpdateItem") ) { return hx::Val( handleUpdateItem_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ArrayDataSource_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_array") ) { _array=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayDataSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_array","\xda","\xb4","\x76","\x21"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ArrayDataSource_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ArrayDataSource_obj,_array),HX_HCSTRING("_array","\xda","\xb4","\x76","\x21")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ArrayDataSource_obj_sStaticStorageInfo = 0;
#endif

static ::String ArrayDataSource_obj_sMemberFields[] = {
	HX_HCSTRING("_array","\xda","\xb4","\x76","\x21"),
	HX_HCSTRING("handleGetSize","\xaf","\x39","\x4b","\x37"),
	HX_HCSTRING("handleGetItem","\x01","\x5e","\xb7","\x30"),
	HX_HCSTRING("handleIndexOf","\x01","\x32","\x34","\xf9"),
	HX_HCSTRING("handleAddItem","\x0c","\xf1","\x71","\x9a"),
	HX_HCSTRING("handleInsert","\x01","\x69","\x09","\xec"),
	HX_HCSTRING("handleRemoveItem","\x3f","\xa9","\xa5","\x92"),
	HX_HCSTRING("handleUpdateItem","\x84","\x59","\x3b","\xce"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void ArrayDataSource_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayDataSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ArrayDataSource_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayDataSource_obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayDataSource_obj::__mClass;

void ArrayDataSource_obj::__register()
{
	hx::Object *dummy = new ArrayDataSource_obj;
	ArrayDataSource_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.data.ArrayDataSource","\x4c","\x5f","\xb5","\x8a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ArrayDataSource_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ArrayDataSource_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArrayDataSource_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ArrayDataSource_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayDataSource_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayDataSource_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace data
