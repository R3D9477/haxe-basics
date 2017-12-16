// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_transformation_IItemTransformer
#include <haxe/ui/data/transformation/IItemTransformer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_98c3d89b78a0c130_11_new,"haxe.ui.data.DataSource","new",0xecb28029,"haxe.ui.data.DataSource.new","haxe/ui/data/DataSource.hx",11,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_20_get_allowCallbacks,"haxe.ui.data.DataSource","get_allowCallbacks",0x132d3065,"haxe.ui.data.DataSource.get_allowCallbacks","haxe/ui/data/DataSource.hx",20,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_22_set_allowCallbacks,"haxe.ui.data.DataSource","set_allowCallbacks",0xefdc62d9,"haxe.ui.data.DataSource.set_allowCallbacks","haxe/ui/data/DataSource.hx",22,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_35_get_size,"haxe.ui.data.DataSource","get_size",0x1cd0d3e1,"haxe.ui.data.DataSource.get_size","haxe/ui/data/DataSource.hx",35,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_38_get,"haxe.ui.data.DataSource","get",0xecad305f,"haxe.ui.data.DataSource.get","haxe/ui/data/DataSource.hx",38,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_46_indexOf,"haxe.ui.data.DataSource","indexOf",0x2f2c1112,"haxe.ui.data.DataSource.indexOf","haxe/ui/data/DataSource.hx",46,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_54_add,"haxe.ui.data.DataSource","add",0xeca8a1ea,"haxe.ui.data.DataSource.add","haxe/ui/data/DataSource.hx",54,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_60_insert,"haxe.ui.data.DataSource","insert",0x7171d710,"haxe.ui.data.DataSource.insert","haxe/ui/data/DataSource.hx",60,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_66_remove,"haxe.ui.data.DataSource","remove",0xd81d301b,"haxe.ui.data.DataSource.remove","haxe/ui/data/DataSource.hx",66,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_72_update,"haxe.ui.data.DataSource","update",0x5a9a19e0,"haxe.ui.data.DataSource.update","haxe/ui/data/DataSource.hx",72,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_78_handleChanged,"haxe.ui.data.DataSource","handleChanged",0x6d133f35,"haxe.ui.data.DataSource.handleChanged","haxe/ui/data/DataSource.hx",78,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_88_handleGetSize,"haxe.ui.data.DataSource","handleGetSize",0xbf1cdeb8,"haxe.ui.data.DataSource.handleGetSize","haxe/ui/data/DataSource.hx",88,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_92_handleGetItem,"haxe.ui.data.DataSource","handleGetItem",0xb889030a,"haxe.ui.data.DataSource.handleGetItem","haxe/ui/data/DataSource.hx",92,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_96_handleIndexOf,"haxe.ui.data.DataSource","handleIndexOf",0x8105d70a,"haxe.ui.data.DataSource.handleIndexOf","haxe/ui/data/DataSource.hx",96,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_100_handleAddItem,"haxe.ui.data.DataSource","handleAddItem",0x22439615,"haxe.ui.data.DataSource.handleAddItem","haxe/ui/data/DataSource.hx",100,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_104_handleInsert,"haxe.ui.data.DataSource","handleInsert",0x6654f818,"haxe.ui.data.DataSource.handleInsert","haxe/ui/data/DataSource.hx",104,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_108_handleRemoveItem,"haxe.ui.data.DataSource","handleRemoveItem",0x199c0fd6,"haxe.ui.data.DataSource.handleRemoveItem","haxe/ui/data/DataSource.hx",108,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_112_handleUpdateItem,"haxe.ui.data.DataSource","handleUpdateItem",0x5531c01b,"haxe.ui.data.DataSource.handleUpdateItem","haxe/ui/data/DataSource.hx",112,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_115_clone,"haxe.ui.data.DataSource","clone",0x0da40766,"haxe.ui.data.DataSource.clone","haxe/ui/data/DataSource.hx",115,0xca832966)
HX_LOCAL_STACK_FRAME(_hx_pos_98c3d89b78a0c130_122_fromString,"haxe.ui.data.DataSource","fromString",0x3474f932,"haxe.ui.data.DataSource.fromString","haxe/ui/data/DataSource.hx",122,0xca832966)
namespace haxe{
namespace ui{
namespace data{

void DataSource_obj::__construct(::Dynamic transformer){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_11_new)
HXLINE(  12)		this->transformer = transformer;
HXLINE(  13)		this->_allowCallbacks = true;
HXLINE(  14)		this->_changed = false;
            	}

Dynamic DataSource_obj::__CreateEmpty() { return new DataSource_obj; }

void *DataSource_obj::_hx_vtable = 0;

Dynamic DataSource_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DataSource_obj > _hx_result = new DataSource_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DataSource_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2511dc29;
}

bool DataSource_obj::get_allowCallbacks(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_20_get_allowCallbacks)
HXDLIN(  20)		return this->_allowCallbacks;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,get_allowCallbacks,return )

bool DataSource_obj::set_allowCallbacks(bool value){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_22_set_allowCallbacks)
HXLINE(  23)		this->_allowCallbacks = value;
HXLINE(  24)		bool _hx_tmp;
HXDLIN(  24)		if ((this->_allowCallbacks == true)) {
HXLINE(  24)			_hx_tmp = (this->_changed == true);
            		}
            		else {
HXLINE(  24)			_hx_tmp = false;
            		}
HXDLIN(  24)		if (_hx_tmp) {
HXLINE(  25)			this->_changed = false;
HXLINE(  26)			if (hx::IsNotNull( this->onChange )) {
HXLINE(  27)				this->onChange();
            			}
            		}
HXLINE(  30)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,set_allowCallbacks,return )

int DataSource_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_35_get_size)
HXDLIN(  35)		return this->handleGetSize();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,get_size,return )

 ::Dynamic DataSource_obj::get(int index){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_38_get)
HXLINE(  39)		 ::Dynamic r = this->handleGetItem(index);
HXLINE(  40)		if (hx::IsNotNull( this->transformer )) {
HXLINE(  41)			r = ::haxe::ui::data::transformation::IItemTransformer_obj::transformFrom(this->transformer,r);
            		}
HXLINE(  43)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,get,return )

int DataSource_obj::indexOf( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_46_indexOf)
HXLINE(  47)		if (hx::IsNotNull( this->transformer )) {
HXLINE(  48)			item = ::haxe::ui::data::transformation::IItemTransformer_obj::transformFrom(this->transformer,item);
            		}
HXLINE(  51)		return this->handleIndexOf(item);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,indexOf,return )

 ::Dynamic DataSource_obj::add( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_54_add)
HXLINE(  55)		 ::Dynamic r = this->handleAddItem(item);
HXLINE(  56)		this->handleChanged();
HXLINE(  57)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,add,return )

 ::Dynamic DataSource_obj::insert( ::Dynamic item,int index){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_60_insert)
HXLINE(  61)		 ::Dynamic r = this->handleInsert(item,index);
HXLINE(  62)		this->handleChanged();
HXLINE(  63)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,insert,return )

 ::Dynamic DataSource_obj::remove( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_66_remove)
HXLINE(  67)		 ::Dynamic r = this->handleRemoveItem(item);
HXLINE(  68)		this->handleChanged();
HXLINE(  69)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,remove,return )

 ::Dynamic DataSource_obj::update(int index, ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_72_update)
HXLINE(  73)		 ::Dynamic r = this->handleUpdateItem(index,item);
HXLINE(  74)		this->handleChanged();
HXLINE(  75)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,update,return )

void DataSource_obj::handleChanged(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_78_handleChanged)
HXLINE(  79)		this->_changed = true;
HXLINE(  80)		bool _hx_tmp;
HXDLIN(  80)		if ((this->_allowCallbacks == true)) {
HXLINE(  80)			_hx_tmp = hx::IsNotNull( this->onChange );
            		}
            		else {
HXLINE(  80)			_hx_tmp = false;
            		}
HXDLIN(  80)		if (_hx_tmp) {
HXLINE(  81)			this->_changed = false;
HXLINE(  82)			this->onChange();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,handleChanged,(void))

int DataSource_obj::handleGetSize(){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_88_handleGetSize)
HXDLIN(  88)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,handleGetSize,return )

 ::Dynamic DataSource_obj::handleGetItem(int index){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_92_handleGetItem)
HXDLIN(  92)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,handleGetItem,return )

int DataSource_obj::handleIndexOf( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_96_handleIndexOf)
HXDLIN(  96)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,handleIndexOf,return )

 ::Dynamic DataSource_obj::handleAddItem( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_100_handleAddItem)
HXDLIN( 100)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,handleAddItem,return )

 ::Dynamic DataSource_obj::handleInsert( ::Dynamic item,int index){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_104_handleInsert)
HXDLIN( 104)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,handleInsert,return )

 ::Dynamic DataSource_obj::handleRemoveItem( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_108_handleRemoveItem)
HXDLIN( 108)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,handleRemoveItem,return )

 ::Dynamic DataSource_obj::handleUpdateItem(int index, ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_112_handleUpdateItem)
HXDLIN( 112)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,handleUpdateItem,return )

 ::haxe::ui::data::DataSource DataSource_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_98c3d89b78a0c130_115_clone)
HXLINE( 116)		 ::haxe::ui::data::DataSource c =  ::haxe::ui::data::DataSource_obj::__alloc( HX_CTX ,null());
HXLINE( 117)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,clone,return )

 ::haxe::ui::data::DataSource DataSource_obj::fromString(::String data,hx::Class type){
            	HX_STACKFRAME(&_hx_pos_98c3d89b78a0c130_122_fromString)
HXDLIN( 122)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,fromString,return )


hx::ObjectPtr< DataSource_obj > DataSource_obj::__new(::Dynamic transformer) {
	hx::ObjectPtr< DataSource_obj > __this = new DataSource_obj();
	__this->__construct(transformer);
	return __this;
}

hx::ObjectPtr< DataSource_obj > DataSource_obj::__alloc(hx::Ctx *_hx_ctx,::Dynamic transformer) {
	DataSource_obj *__this = (DataSource_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DataSource_obj), true, "haxe.ui.data.DataSource"));
	*(void **)__this = DataSource_obj::_hx_vtable;
	__this->__construct(transformer);
	return __this;
}

DataSource_obj::DataSource_obj()
{
}

void DataSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataSource);
	HX_MARK_MEMBER_NAME(onChange,"onChange");
	HX_MARK_MEMBER_NAME(transformer,"transformer");
	HX_MARK_MEMBER_NAME(_changed,"_changed");
	HX_MARK_MEMBER_NAME(_allowCallbacks,"_allowCallbacks");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_END_CLASS();
}

void DataSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onChange,"onChange");
	HX_VISIT_MEMBER_NAME(transformer,"transformer");
	HX_VISIT_MEMBER_NAME(_changed,"_changed");
	HX_VISIT_MEMBER_NAME(_allowCallbacks,"_allowCallbacks");
	HX_VISIT_MEMBER_NAME(size,"size");
}

hx::Val DataSource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return hx::Val( inCallProp == hx::paccAlways ? get_size() : size ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"insert") ) { return hx::Val( insert_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexOf") ) { return hx::Val( indexOf_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { return hx::Val( onChange ); }
		if (HX_FIELD_EQ(inName,"_changed") ) { return hx::Val( _changed ); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return hx::Val( get_size_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transformer") ) { return hx::Val( transformer ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"handleInsert") ) { return hx::Val( handleInsert_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handleChanged") ) { return hx::Val( handleChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleGetSize") ) { return hx::Val( handleGetSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleGetItem") ) { return hx::Val( handleGetItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleIndexOf") ) { return hx::Val( handleIndexOf_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleAddItem") ) { return hx::Val( handleAddItem_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowCallbacks") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_allowCallbacks() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_allowCallbacks") ) { return hx::Val( _allowCallbacks ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handleRemoveItem") ) { return hx::Val( handleRemoveItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleUpdateItem") ) { return hx::Val( handleUpdateItem_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_allowCallbacks") ) { return hx::Val( get_allowCallbacks_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_allowCallbacks") ) { return hx::Val( set_allowCallbacks_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DataSource_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

hx::Val DataSource_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { onChange=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_changed") ) { _changed=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transformer") ) { transformer=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowCallbacks") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_allowCallbacks(inValue.Cast< bool >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_allowCallbacks") ) { _allowCallbacks=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("transformer","\xd9","\xb8","\xca","\x32"));
	outFields->push(HX_HCSTRING("_changed","\x75","\x0a","\x85","\x06"));
	outFields->push(HX_HCSTRING("_allowCallbacks","\xe4","\x1d","\xa5","\xc2"));
	outFields->push(HX_HCSTRING("allowCallbacks","\x45","\xd5","\x44","\x79"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DataSource_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DataSource_obj,onChange),HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97")},
	{hx::fsObject /*::haxe::ui::data::transformation::IItemTransformer*/ ,(int)offsetof(DataSource_obj,transformer),HX_HCSTRING("transformer","\xd9","\xb8","\xca","\x32")},
	{hx::fsBool,(int)offsetof(DataSource_obj,_changed),HX_HCSTRING("_changed","\x75","\x0a","\x85","\x06")},
	{hx::fsBool,(int)offsetof(DataSource_obj,_allowCallbacks),HX_HCSTRING("_allowCallbacks","\xe4","\x1d","\xa5","\xc2")},
	{hx::fsInt,(int)offsetof(DataSource_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *DataSource_obj_sStaticStorageInfo = 0;
#endif

static ::String DataSource_obj_sMemberFields[] = {
	HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"),
	HX_HCSTRING("transformer","\xd9","\xb8","\xca","\x32"),
	HX_HCSTRING("_changed","\x75","\x0a","\x85","\x06"),
	HX_HCSTRING("_allowCallbacks","\xe4","\x1d","\xa5","\xc2"),
	HX_HCSTRING("get_allowCallbacks","\x0e","\xb6","\xde","\x14"),
	HX_HCSTRING("set_allowCallbacks","\x82","\xe8","\x8d","\xf1"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("handleChanged","\x2c","\x9a","\x41","\xe5"),
	HX_HCSTRING("handleGetSize","\xaf","\x39","\x4b","\x37"),
	HX_HCSTRING("handleGetItem","\x01","\x5e","\xb7","\x30"),
	HX_HCSTRING("handleIndexOf","\x01","\x32","\x34","\xf9"),
	HX_HCSTRING("handleAddItem","\x0c","\xf1","\x71","\x9a"),
	HX_HCSTRING("handleInsert","\x01","\x69","\x09","\xec"),
	HX_HCSTRING("handleRemoveItem","\x3f","\xa9","\xa5","\x92"),
	HX_HCSTRING("handleUpdateItem","\x84","\x59","\x3b","\xce"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void DataSource_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DataSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DataSource_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DataSource_obj::__mClass,"__mClass");
};

#endif

hx::Class DataSource_obj::__mClass;

static ::String DataSource_obj_sStaticFields[] = {
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	::String(null())
};

void DataSource_obj::__register()
{
	hx::Object *dummy = new DataSource_obj;
	DataSource_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.data.DataSource","\xb7","\x37","\x3b","\x2c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DataSource_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DataSource_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DataSource_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DataSource_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DataSource_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DataSource_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataSource_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataSource_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace data
