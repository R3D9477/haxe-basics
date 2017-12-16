// GeneratedByHaxe
#ifndef INCLUDED_Reflect
#define INCLUDED_Reflect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Reflect)



class HXCPP_CLASS_ATTRIBUTES Reflect_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Reflect_obj OBJ_;
		Reflect_obj();

	public:
		enum { _hx_ClassId = 0x0e2f4039 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Reflect")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"Reflect"); }

		hx::ObjectPtr< Reflect_obj > __new() {
			hx::ObjectPtr< Reflect_obj > __this = new Reflect_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Reflect_obj > __alloc(hx::Ctx *_hx_ctx) {
			Reflect_obj *__this = (Reflect_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Reflect_obj), false, "Reflect"));
			*(void **)__this = Reflect_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Reflect_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Reflect","\x1d","\xac","\x7a","\xb6"); }

		static  ::Dynamic field( ::Dynamic o,::String field);
		static ::Dynamic field_dyn();

		static void setField( ::Dynamic o,::String field, ::Dynamic value);
		static ::Dynamic setField_dyn();

		static  ::Dynamic getProperty( ::Dynamic o,::String field);
		static ::Dynamic getProperty_dyn();

		static void setProperty( ::Dynamic o,::String field, ::Dynamic value);
		static ::Dynamic setProperty_dyn();

		static  ::Dynamic callMethod( ::Dynamic o, ::Dynamic func,::cpp::VirtualArray args);
		static ::Dynamic callMethod_dyn();

		static ::Array< ::String > fields( ::Dynamic o);
		static ::Dynamic fields_dyn();

		static int compare( ::Dynamic a, ::Dynamic b);
		static ::Dynamic compare_dyn();

		static bool isObject( ::Dynamic v);
		static ::Dynamic isObject_dyn();

		static bool isEnumValue( ::Dynamic v);
		static ::Dynamic isEnumValue_dyn();

		static  ::Dynamic makeVarArgs( ::Dynamic f);
		static ::Dynamic makeVarArgs_dyn();

};


#endif /* INCLUDED_Reflect */ 
