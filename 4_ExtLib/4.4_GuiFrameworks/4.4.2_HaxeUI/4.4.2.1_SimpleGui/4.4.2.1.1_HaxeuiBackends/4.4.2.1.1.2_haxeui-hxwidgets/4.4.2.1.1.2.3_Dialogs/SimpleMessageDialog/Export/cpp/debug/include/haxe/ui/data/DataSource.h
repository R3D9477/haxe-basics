// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_data_DataSource
#define INCLUDED_haxe_ui_data_DataSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,data,DataSource)
HX_DECLARE_CLASS4(haxe,ui,data,transformation,IItemTransformer)

namespace haxe{
namespace ui{
namespace data{


class HXCPP_CLASS_ATTRIBUTES DataSource_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DataSource_obj OBJ_;
		DataSource_obj();

	public:
		enum { _hx_ClassId = 0x2511dc29 };

		void __construct(::Dynamic transformer);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.data.DataSource")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.data.DataSource"); }
		static hx::ObjectPtr< DataSource_obj > __new(::Dynamic transformer);
		static hx::ObjectPtr< DataSource_obj > __alloc(hx::Ctx *_hx_ctx,::Dynamic transformer);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DataSource_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DataSource","\xc5","\x7a","\x84","\x14"); }

		static  ::haxe::ui::data::DataSource fromString(::String data,hx::Class type);
		static ::Dynamic fromString_dyn();

		 ::Dynamic onChange;
		Dynamic onChange_dyn() { return onChange;}
		::Dynamic transformer;
		bool _changed;
		bool _allowCallbacks;
		bool get_allowCallbacks();
		::Dynamic get_allowCallbacks_dyn();

		bool set_allowCallbacks(bool value);
		::Dynamic set_allowCallbacks_dyn();

		int size;
		int get_size();
		::Dynamic get_size_dyn();

		 ::Dynamic get(int index);
		::Dynamic get_dyn();

		int indexOf( ::Dynamic item);
		::Dynamic indexOf_dyn();

		 ::Dynamic add( ::Dynamic item);
		::Dynamic add_dyn();

		 ::Dynamic insert( ::Dynamic item,int index);
		::Dynamic insert_dyn();

		 ::Dynamic remove( ::Dynamic item);
		::Dynamic remove_dyn();

		 ::Dynamic update(int index, ::Dynamic item);
		::Dynamic update_dyn();

		void handleChanged();
		::Dynamic handleChanged_dyn();

		virtual int handleGetSize();
		::Dynamic handleGetSize_dyn();

		virtual  ::Dynamic handleGetItem(int index);
		::Dynamic handleGetItem_dyn();

		virtual int handleIndexOf( ::Dynamic item);
		::Dynamic handleIndexOf_dyn();

		virtual  ::Dynamic handleAddItem( ::Dynamic item);
		::Dynamic handleAddItem_dyn();

		virtual  ::Dynamic handleInsert( ::Dynamic item,int index);
		::Dynamic handleInsert_dyn();

		virtual  ::Dynamic handleRemoveItem( ::Dynamic item);
		::Dynamic handleRemoveItem_dyn();

		virtual  ::Dynamic handleUpdateItem(int index, ::Dynamic item);
		::Dynamic handleUpdateItem_dyn();

		virtual  ::haxe::ui::data::DataSource clone();
		::Dynamic clone_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace data

#endif /* INCLUDED_haxe_ui_data_DataSource */ 
