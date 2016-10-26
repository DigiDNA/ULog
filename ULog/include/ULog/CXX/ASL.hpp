/*******************************************************************************
 * The MIT License (MIT)
 * 
 * Copyright (c) 2016 Jean-David Gadina - www.xs-labs.com
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 ******************************************************************************/

/*!
 * @header      ASL.hpp
 * @copyright   (c) 2016, Jean-David Gadina - www.xs-labs.com
 */

#ifndef ULOG_CXX_ASL_H
#define ULOG_CXX_ASL_H

#include <ULog/Base.h>
#include <ULog/CXX/Message.hpp>

#ifdef __APPLE__

#include <functional>
#include <string>
#include <vector>

namespace ULog
{
    class ASL
    {
        public:
            
            ASL( void );
            ASL( const ASL & o );
            ASL( ASL && o );
            
            ~ASL( void );
            
            ASL & operator =( ASL o );
            
            friend void swap( ASL & o1, ASL & o2 );
            
            void SetMessageCallback( std::function< void( const Message & ) > f );
            
            void AddSender( const std::string & sender );
            
            void Start( void );
            bool Started( void );
            
        private:
            
            class IMPL;
            
            IMPL * impl;
    };
}

#endif

#endif /* ULOG_CXX_ASL_H */
