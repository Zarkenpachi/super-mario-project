////////////////////////////////////////////////////////////////////////
// Background.hpp
// Super Mario Project
// Copyright (C) 2011  
// Lionel Joseph lionel.r.joseph@gmail.com
// Olivier Guittonneau openmengine@gmail.com
////////////////////////////////////////////////////////////////////////

#pragma once
#ifndef HPP_BACKGROUND
#define HPP_BACKGROUND

#include "Object.hpp"

namespace Rendering
{
    class Background : public Object
    {
    public:
		/* Constructors */
		Background(const string& textureName) : Object(textureName), _verticalRepetition(false) { }
		Background(const string& textureName, bool verticalRepetition) : Object(textureName), 
			_verticalRepetition(verticalRepetition) {  }
		
		/* getter and setter */
		bool getVerticalRepetition();
		void setVerticalRepetition(bool verticalRepetition);

		/* Methods */
		void update(float time);
		void render(RenderWindow& app, Screen& screen);
		
		/* Destructor */
        virtual ~Background();
		
    private:
		bool _verticalRepetition;		
    };
} // namespace

#endif // HPP_BACKGROUND