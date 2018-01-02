// GeneratedByHaxe
#ifndef INCLUDED_Type
#define INCLUDED_Type

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Type)
HX_DECLARE_CLASS0(ValueType)



class HXCPP_CLASS_ATTRIBUTES Type_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Type_obj OBJ_;
		Type_obj();

	public:
		enum { _hx_ClassId = 0x37e21eda };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Type")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"Type"); }

		hx::ObjectPtr< Type_obj > __new() {
			hx::ObjectPtr< Type_obj > __this = new Type_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Type_obj > __alloc(hx::Ctx *_hx_ctx) {
			Type_obj *__this = (Type_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Type_obj), false, "Type"));
			*(void **)__this = Type_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Type_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Type","\xda","\x1e","\xe2","\x37"); }

		static hx::Class getClass( ::Dynamic o);
		static ::Dynamic getClass_dyn();

		static hx::Class getSuperClass(hx::Class c);
		static ::Dynamic getSuperClass_dyn();

		static ::String getClassName(hx::Class c);
		static ::Dynamic getClassName_dyn();

		static hx::Class resolveClass(::String name);
		static ::Dynamic resolveClass_dyn();

		static  ::Dynamic createInstance(hx::Class cl,::cpp::VirtualArray args);
		static ::Dynamic createInstance_dyn();

		static  ::Dynamic createEmptyInstance(hx::Class cl);
		static ::Dynamic createEmptyInstance_dyn();

		static  ::ValueType _hx_typeof( ::Dynamic v);
		static ::Dynamic _hx_typeof_dyn();

		static bool enumEq( ::Dynamic a, ::Dynamic b);
		static ::Dynamic enumEq_dyn();

		static ::String enumConstructor( ::Dynamic e);
		static ::Dynamic enumConstructor_dyn();

		static ::cpp::VirtualArray enumParameters( ::Dynamic e);
		static ::Dynamic enumParameters_dyn();

};


#endif /* INCLUDED_Type */ 
