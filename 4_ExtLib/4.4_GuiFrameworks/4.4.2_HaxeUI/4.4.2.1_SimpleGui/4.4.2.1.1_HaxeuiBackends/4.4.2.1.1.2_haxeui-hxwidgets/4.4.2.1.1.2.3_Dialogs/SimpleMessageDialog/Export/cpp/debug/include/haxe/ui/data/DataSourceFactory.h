// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_data_DataSourceFactory
#define INCLUDED_haxe_ui_data_DataSourceFactory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS3(haxe,ui,data,DataSource)
HX_DECLARE_CLASS3(haxe,ui,data,DataSourceFactory)

namespace haxe{
namespace ui{
namespace data{


class HXCPP_CLASS_ATTRIBUTES DataSourceFactory_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DataSourceFactory_obj OBJ_;
		DataSourceFactory_obj();

	public:
		enum { _hx_ClassId = 0x075f2fa1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.data.DataSourceFactory")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.data.DataSourceFactory"); }
		static hx::ObjectPtr< DataSourceFactory_obj > __new();
		static hx::ObjectPtr< DataSourceFactory_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DataSourceFactory_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DataSourceFactory","\x85","\xdc","\x59","\xc7"); }

		 ::haxe::ui::data::DataSource create(hx::Class type);
		::Dynamic create_dyn();

		 ::haxe::ui::data::DataSource fromString(::String data,hx::Class type);
		::Dynamic fromString_dyn();

		 ::Dynamic xml2Object( ::Xml el,hx::Null< bool >  addId);
		::Dynamic xml2Object_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace data

#endif /* INCLUDED_haxe_ui_data_DataSourceFactory */ 
