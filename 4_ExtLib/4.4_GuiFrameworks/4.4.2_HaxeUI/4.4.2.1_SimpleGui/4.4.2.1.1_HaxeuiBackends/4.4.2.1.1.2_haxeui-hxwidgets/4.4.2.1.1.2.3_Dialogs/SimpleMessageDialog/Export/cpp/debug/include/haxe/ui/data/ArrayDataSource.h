// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_data_ArrayDataSource
#define INCLUDED_haxe_ui_data_ArrayDataSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,data,ArrayDataSource)
HX_DECLARE_CLASS3(haxe,ui,data,DataSource)
HX_DECLARE_CLASS4(haxe,ui,data,transformation,IItemTransformer)

namespace haxe{
namespace ui{
namespace data{


class HXCPP_CLASS_ATTRIBUTES ArrayDataSource_obj : public  ::haxe::ui::data::DataSource_obj
{
	public:
		typedef  ::haxe::ui::data::DataSource_obj super;
		typedef ArrayDataSource_obj OBJ_;
		ArrayDataSource_obj();

	public:
		enum { _hx_ClassId = 0x7ecbb5b2 };

		void __construct(::Dynamic transformer);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.data.ArrayDataSource")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.data.ArrayDataSource"); }
		static hx::ObjectPtr< ArrayDataSource_obj > __new(::Dynamic transformer);
		static hx::ObjectPtr< ArrayDataSource_obj > __alloc(hx::Ctx *_hx_ctx,::Dynamic transformer);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArrayDataSource_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ArrayDataSource","\x7e","\x49","\xf8","\x7b"); }

		::cpp::VirtualArray _array;
		int handleGetSize();

		 ::Dynamic handleGetItem(int index);

		int handleIndexOf( ::Dynamic item);

		 ::Dynamic handleAddItem( ::Dynamic item);

		 ::Dynamic handleInsert( ::Dynamic item,int index);

		 ::Dynamic handleRemoveItem( ::Dynamic item);

		 ::Dynamic handleUpdateItem(int index, ::Dynamic item);

		 ::haxe::ui::data::DataSource clone();

};

} // end namespace haxe
} // end namespace ui
} // end namespace data

#endif /* INCLUDED_haxe_ui_data_ArrayDataSource */ 
