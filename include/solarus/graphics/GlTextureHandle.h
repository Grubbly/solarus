/*
 * Copyright (C) 2006-2018 Christopho, Solarus - http://www.solarus-games.org
 *
 * Solarus is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Solarus is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef SOLARUS_GL_TEXTURE_HANDLE_H
#define SOLARUS_GL_TEXTURE_HANDLE_H

#include "solarus/core/Common.h"
#include <SDL_opengl.h> // TODO what about GLES?

namespace Solarus {

/**
 * \brief Wraps an OpenGL texture handle.
 */
class GlTextureHandle {

public:

  GlTextureHandle();
  ~GlTextureHandle();
  explicit GlTextureHandle(GLuint texture);

  GlTextureHandle(const GlTextureHandle& other) = delete;
  GlTextureHandle(GlTextureHandle&& other);

  GlTextureHandle& operator=(const GlTextureHandle& other) = delete;
  GlTextureHandle& operator=(GlTextureHandle&& other);

  bool is_empty() const;
  GLuint get() const;
  void clear();

private:

  GLuint texture;       /**< The wrapped texture handle. */

};

}

#endif
